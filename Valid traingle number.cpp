class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int start=j+1;
                int end=n-1;
                while(start<=end)
                {
                    int mid=start+(end-start)/2;
                    if(nums[mid]<(nums[i]+nums[j]))
                      start=mid+1;
                      else{
                          end=mid-1;
                      }
                }
                cnt+=start-j-1;

            }
        }
        return cnt;
    }
};
