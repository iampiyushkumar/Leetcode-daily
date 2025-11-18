class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size();
       int i=0;
       while(i<n){
        if(i==n-2&&bits[i]==1) return false;
       else if(bits[i]==1) i+=2;
        else if(bits[i]==0) i++;
       }
       return true;
    }
};
