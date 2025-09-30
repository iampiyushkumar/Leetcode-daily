class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int len=nums.size();
        if(len==1) return nums[0];
        int n=nums.size();
       for(int k=0;k<len;k++)
       {
        n=nums.size();
        vector<int>temp;
        for(int i=0;i<n-1;i++)
         {
            temp.push_back((nums[i]+nums[i+1])%10);
         }
        // for(auto x:temp) cout<<x<<" ";
        // cout<<endl;
         nums=temp;
       }
       return nums[0];
    }
};
