class Solution {
public:
    int maxOperations(string s) {
        int cnt=0;
        int res=0;
        int n=s.size();
        int clstr=0;
        int i=0;
        while(i<(n-1)){
            
            if(s[i]=='0'){
                 while(s[i]==s[i+1])
                  i++;

                  cnt=clstr+(cnt);
                  res+=cnt;
               //   cout<<clstr<<" "<<cnt<<endl;
                  clstr=0;
            }
            else{
                 clstr++;
                 while(s[i]==s[i+1]){
                     i++;
                     clstr++;
                 }
                
            }
            i++;
        }
        if(clstr!=0&&s[n-1]=='0')
        {
            cnt=(cnt)+clstr;
            res+=cnt;
        }
      //  cout<<clstr<<" "<<cnt<<endl;
return res;
    }
};
