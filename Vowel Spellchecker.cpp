class Solution {
public:
unordered_set<char>st={'a','e','i','o','u'};
bool isvowel(char &ch)
{
    if(st.find(ch)!=st.end()) return true;
    return false;
}
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_map<string,int>mp;
        unordered_map<string,int>chhota;
        vector<string>res;
        int n=wordlist.size();
        for(int i=0;i<n;i++)
        {
             mp[wordlist[i]]++;
             string x=wordlist[i];
             transform(x.begin(),x.end(),x.begin(), ::tolower);
             if(chhota.find(x)==chhota.end())
             chhota[x]=i;
        }
        for(auto x:queries)
        {
            bool flag=false;
            string str=x; 
            transform(str.begin(),str.end(),str.begin(),::tolower);
            if(mp.find(x)!=mp.end()){
                 flag=true;
            //     cout<<x<<endl;
                 res.push_back(x);
            }
            else if(chhota.find(str)!=chhota.end()){
                     flag=true;
                   //  cout<<x<<" "<<wordlist[chhota[str]]<<endl;
                   res.push_back(wordlist[chhota[str]]);
                   
            }
            else if(flag==false){
                    
                    for(auto s:wordlist)
                    { if(flag==true) break;
                        if(s.size()!=x.size()) continue;
                        int m=s.size();
                        for(int i=0;i<m;i++)
                        {
                            char c=tolower(s[i]);
                            if(c!=str[i]){
                                bool vow1=isvowel(c);
                                bool vow2=isvowel(str[i]);
                                if(vow1&&!vow2) break;
                                else if(!vow1&&vow2) break;
                                else if(!vow1&&!vow2) break;
                            }
                            if(i==m-1){
                                flag=true;
                             //   cout<<x<<" "<<s<<endl;
                                res.push_back(s);
                                break;
                            }
                        }
                    }
               if(flag==false)
               res.push_back("");
            }
            
         
       //  cout<<flag<<endl;
          
           

        }
        return  res;
    }
};
