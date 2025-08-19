class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long cnt=1;
        long long ans=0;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==0&&nums[i-1]==0)
            {
              cnt++;
            }
            else if(nums[i-1]==0){
               // cout<<cnt<<endl;
                ans+=(cnt*(cnt+1))/2;
                cnt=1;
            }
        }
        if(nums[n-1]==0)
        ans+=(cnt*(cnt+1))/2;
        return ans;
    }
};
