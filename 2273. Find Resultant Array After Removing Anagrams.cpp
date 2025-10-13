class Solution {
public:
bool check(string s1,string s2){
    vector<int>cnt(26,0);
    for(auto x:s1) cnt[x-'a']++;
    for(auto x:s2){
        if(cnt[x-'a']>0) cnt[x-'a']--;
    }
    for(int i=0;i<26;i++)
    if(cnt[i]>0) return false;
    return true;
}
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>ans;
        for(auto x:words){
             if(!ans.empty()&&ans.back().size()==x.size()&&check(x,ans.back()))
              continue;
              else ans.push_back(x);
        }
        return ans;
    }
};
