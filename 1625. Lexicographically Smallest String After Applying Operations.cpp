class Solution {
public:
string addition(string s,int &a){
    int n=s.size();
    for(int i=1;i<n;i+=2){
        int digit=(s[i]-'0'+a)%10;
        s[i]=(digit+'0');
    }
    return s;
}
string rotate(string s, int &b){
    int n=s.size();
    return s.substr(n-b)+s.substr(0,n-b);
}
    string findLexSmallestString(string s, int a, int b) {
           unordered_set<string>atit;
           stack<string>st;
           st.push(s);
           string ans=s;
           while(!st.empty()){
              string curr=st.top();
              st.pop();
              if(atit.find(curr)==atit.end()){
                    atit.insert(curr);
                    if(ans>curr)
                    ans=curr;
                    st.push(addition(curr,a));
                    st.push(rotate(curr,b));
              }
           }
           return ans;
    }
};
