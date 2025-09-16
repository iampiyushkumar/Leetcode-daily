class Solution {
public:

    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int>st;
        for(auto x:nums)
        {
          
            while(!st.empty())
            {
                int topi=st.back();
               int hcf=gcd(topi,x);
               if(hcf==1) break;
               st.pop_back();
               long long val=(x/hcf)*topi;
               x=(int)val;
        
            }
             st.push_back(x);
            
        }
        return st;
    }
};
