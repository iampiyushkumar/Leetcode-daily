class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int prev=-1;
        int  n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
            if(prev!=-1&&(i-prev)<=k) 
             return false;
            prev=i;
           // cout<<prev<<" ";
            }

        }
        return true;
    }
};
