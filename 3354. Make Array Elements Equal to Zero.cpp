class Solution {
public:
int leftsum(int i,vector<int>&nums){
    int sum=0;
    for(int j=0;j<=i;j++) sum+=nums[j];
    return sum;
}
int rightsum(int i,vector<int>&nums){
    int sum=0;
    for(int j=i;j<nums.size();j++) sum+=nums[j];

    return sum;
}
    int countValidSelections(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
            {
                int left=leftsum(i-1,nums);
                int right=rightsum(i+1,nums);
                if(abs(left-right)==0) cnt+=2;
                else if(abs(left-right)==1) cnt+=1;
            }
        }
        return cnt;
    }
};
