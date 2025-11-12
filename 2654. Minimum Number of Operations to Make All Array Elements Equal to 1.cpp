class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ones=0;
        for(auto x:nums) if(x==1) ones++;
        int n=nums.size();
        if(ones) return n-ones;
        int res=INT_MAX;
        for(int i=0;i<n;i++){
            int g=nums[i];
            for(int j=i+1;j<n;j++){
                 g=gcd(g,nums[j]);
                 if(g==1)
                 {
                    res=min(res,(j-i+n-1));
                    break;
                 }
            }
        }
        return res==INT_MAX?-1:res;
    }
};
/*
2    4     6     3
2    4     2     3
2    4     2     1
2    4     1     1
2    1     1     1
1    1      1    1 
*/
