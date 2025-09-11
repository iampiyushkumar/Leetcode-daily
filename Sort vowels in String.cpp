class Solution {
public:
unordered_set<char>letters={'A','E','I','O','U','a','e','i','o','u'};
bool isvowel(char ch)
{
    if(letters.find(ch)!=letters.end()) return true;
    return false;
}
    string sortVowels(string s) {
        string vow="";
        for(auto x:s)
        {
            if(isvowel(x)) vow+=x;
        }
        sort(vow.begin(),vow.end(),greater<char>());
        string t;
        for(auto x:s)
        {
            if(isvowel(x)==false) t+=x;
            else{
                t+=vow.back();
                vow.pop_back();
            }
        }
        return t;
    }
};
