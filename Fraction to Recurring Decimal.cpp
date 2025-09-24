class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        string ans;
        
        if((numerator<0&&denominator>0)||(numerator>0&&denominator<0)) 
        if(numerator) ans+="-";

        long long num=llabs((long long)numerator);
        long long den=llabs((long long)denominator);
        ans+=to_string(num/den);
      long long rem=num%den;
      if(rem==0) return ans;
      ans+=".";
      unordered_map<long long ,int>index;
        while(rem>0)
        {
          if(index.find(rem)!=index.end()){
            ans.insert(index[rem],"(");
             ans+=')';
             break;
          }
          index[rem]=ans.size();
          rem*=10;
          ans+=to_string(rem/den);
          rem=rem%den;
        }
        /*string str="raayan";
        str.insert(2,"m");
        cout<<str;*/
        return ans;
    }
};
