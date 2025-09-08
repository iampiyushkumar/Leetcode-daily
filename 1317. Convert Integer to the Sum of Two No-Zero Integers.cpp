class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<n;i++)
        { 
            int num=n-i;
            string s1=to_string(i);
            string s2=to_string(num);
            if(s1.find('0')==string::npos&&s2.find('0')==string::npos)
            {
               return {stoi(s1),stoi(s2)};
            }
        }
        return {};
    }
};
