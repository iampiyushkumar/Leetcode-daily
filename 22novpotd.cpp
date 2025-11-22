class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int res=0;
        for(auto x :nums)
            {
                int rem=x%3;
                res+=min(3-rem,rem);
            }
        return res;
    }
};
