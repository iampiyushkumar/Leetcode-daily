class Solution {
public:
    int minOperations(vector<int>& nums) {
      int cnt=0;
      stack<int>st;
      for(auto x:nums){
          while(!st.empty()&&st.top()>x)
            {
                st.pop();
                cnt++;
            }
            if(!st.empty()&&st.top()==x) continue;
           if(x!=0)
            st.push(x);
      }
      cnt+=st.size();
      return cnt;
    }
};
