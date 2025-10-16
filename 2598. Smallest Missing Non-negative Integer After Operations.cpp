class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
  vector<int> freq(value, 0);
        for (int x : nums) {
            int r = ((x % value) + value) % value; 
            ++freq[r];
        }

        long long m = 0;
        while (true) {
            int r = m % value;
            if (freq[r] == 0) return (int)m;
            --freq[r];
            ++m;
        }
      

    }
};
