class Solution {
public:
const int mod=1e9+7;
    int numSub(string s) {
        long long res=0;
        int cnt=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
           if(s[i]=='1') cnt=(cnt+1);
           else{
            long long val=((cnt*1LL*(cnt+1))/2)%mod;
            res+=val;
            cnt=0;
           }
        }
          long long val=((cnt*1LL*(cnt+1))/2)%mod;
        res+=val;
        return res;
    }
};
/*
11=>   2!/1 + 2!/2=3
111=>  3/1+3/2+3/3=3+


11=2+1=3
111=> 3+2+1=6
1111=>4+3+2+1=
hope you got n(n+1)/2
*/
