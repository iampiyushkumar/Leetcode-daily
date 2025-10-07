class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        vector<int> ans(n, 1);
        unordered_map<int, int> lastRain;    
        set<int> dryDays;                    

        for (int i = 0; i < n; ++i) {
            if (rains[i] > 0) {
                int lake = rains[i];
                if (lastRain.count(lake)) {
                    auto it = dryDays.lower_bound(lastRain[lake] + 1);
                    if (it == dryDays.end()) {
                        return {};
                    }
                    ans[*it] = lake;
                    dryDays.erase(it);
                }
                ans[i] = -1;
                lastRain[lake] = i;
            } else {
                dryDays.insert(i);
            }
        }
        return ans;
    }
};
//emppty={0,1}
