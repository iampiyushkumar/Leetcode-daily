class Solution {
public:
    bool hasSameDigits(string s) {
         string temp;
         while(true){
            temp="";
            for(int i=1;i<s.size();i++)
            {
                temp+=((s[i-1]-'0')+(s[i]-'0'))%10;
            }
            if(temp.size()==2){
                if(temp[0]==temp[1]) return true;
                return false;
            }
            s=temp;
            
         }
         
    }
};
