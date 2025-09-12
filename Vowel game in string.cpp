class Solution {
public:
unordered_set<char>st={'a','e','i','o','u'};
bool iseven(char ch)
{
    if(st.find(ch)!=st.end()) return true;
    return false;
}
    bool doesAliceWin(string s) {
        int cnt=0;
        for(auto x:s)
        {
            if(iseven(x)) cnt++;
        }
        if(cnt==0) return false;
     
        return true;
    }
};
