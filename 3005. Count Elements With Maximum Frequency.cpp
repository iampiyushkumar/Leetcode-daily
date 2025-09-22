class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>count(101,0);
        int cnt=0;
        int maxi=0;
        for(auto x:nums)
         {
            count[x]++;
            maxi=max(maxi,count[x]);
         }
        for(auto x:count)
        {
            if(x==maxi) cnt+=x;
        }
        return cnt;
    }
};
