class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char>broken;
        for(auto x:brokenLetters)
        broken.insert(x);

        int cnt=0;
        vector<string>words;
        stringstream ss(text);
        string k;
        while(ss>>k)
        words.push_back(k);

        for(auto x:words)
        {
            bool flag=false;
            for(auto y:x)
             { 
                if(broken.find(y)!=broken.end()){
                    flag=true;
                    break;
                }
             }
             if(flag==false) cnt++;
        }
        return cnt;
    }
};
