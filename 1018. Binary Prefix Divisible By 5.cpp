class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
       vector<bool>ans;
       int n=nums.size();
       //xnew=x(old)*2+bit
     long long num=0;
       for(int i=0;i<n;i++){
           num=(num*2+nums[i])%5;
           if(num==0) ans.push_back(true);
           else
           ans.push_back(false);
       }
       return ans;
    }
};
/*
1010=10
1111=15
10100=20
11001=25
11110=30
*/
