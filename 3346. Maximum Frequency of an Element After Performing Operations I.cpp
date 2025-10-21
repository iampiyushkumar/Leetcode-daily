class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        int n=nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(auto x:nums) mp[x]++;

        int maxfreq=1;
        int startindex=0;
        int endindex=0;
        for(int element=nums.front();element<=nums.back();element++)
        {
             while(endindex<n&&nums[endindex]<=(element+k)) endindex++;
             while(startindex<n&&nums[startindex]<(element-k)) startindex++;
             int len=endindex-startindex;
             int bound=(mp.find(element)!=mp.end()?mp[element]:0)+numOperations;
             maxfreq=max(maxfreq,min(len,bound));
        }
        return maxfreq;

    }
};
