class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_map<char,int>left;
        unordered_map<char,int>right;
        for(int i=0;i<s.size();i++)
        {
            if(left.find(s[i])==left.end())
                 left[s[i]]=i;
            right[s[i]]=i;
        }
       /* for(auto x:left) cout<<x.first<<" "<<x.second<<" ";
        cout<<endl;
        for(auto x:right) cout<<x.first<<" "<<x.second<<" ";*/
        int cnt=0;
        cout<<endl;
       for(auto x:left)
        {
            char ch=x.first;
            int f=left[ch];
            int l=right[ch];
            if(f==l) continue;
         //   cout<<f<<" "<<l<<endl;
            unordered_set<char>st;
            for(int i=f+1;i<l;i++)
               st.insert(s[i]);
            //   cout<<st.size();
         cnt+=st.size();
        }
        return cnt;
    }
};
/*
left=> a=0, d=1,c=2
right=> a=3 d=1 c=2*/
