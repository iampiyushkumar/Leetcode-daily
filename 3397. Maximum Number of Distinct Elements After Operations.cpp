class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
       int cnt=0;
       sort(nums.begin(),nums.end());
       int lowerbound=0;
       int upperbound=0;
       int last=INT_MIN;
       for(int i=0;i<nums.size();i++){
          lowerbound=nums[i]-k;
          upperbound=nums[i]+k;
          if(last<lowerbound){
            cnt++;
            last=lowerbound;
          }
          else if(last<upperbound){
            cnt++;
            last=last+1;
          }
       }
       return cnt;
    }
};

