class Solution {
public:
string letter="abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ_";
bool isvalid(string s){
    if(s.empty()) return false;
    for(auto ch:s){
        if(letter.find(ch)==letter.npos) return false;
    }
    return true;
}
bool validbusiness(string s){
    if(s=="electronics"||s=="grocery"||s=="pharmacy"||s=="restaurant") return true;
    return false;
}
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<string>ans;
        map<string,vector<string>>mp;
        int n=code.size();
        for(int i=0;i<n;i++){
          //  cout<<isvalid(code[i])<<" "<<validbusiness(businessLine[i])<<endl;
            if(isvalid(code[i])&&isActive[i]){
                if(validbusiness(businessLine[i])){
                    mp[businessLine[i]].push_back(code[i]);
                }
            }
        }
        for(auto x:mp)
        {
            vector<string>temp;
            for(string str:x.second) 
             temp.push_back(str);

             sort(temp.begin(),temp.end());
             for(auto str:temp) ans.push_back(str);

        }
     
        return ans;
    }
};
