class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        int maxi=0;
        int sum=0;
        for(int i=0;i<n-2;i++)
        { 
           if(nums[i]+nums[i+1]>nums[i+2])
             maxi=max(maxi,nums[i]+nums[i+1]+nums[i+2]);
        }
        return maxi;
    }
};
//1   3   4   4   4   8    18
