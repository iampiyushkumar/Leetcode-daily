class Solution {
public:
bool isbalanced(int n){
   vector<int>mp(10,0);
   while(n){
     mp[n%10]++;
     n=n/10;
   }
   for(int i=0;i<10;i++)
   {
     if(mp[i]>0&&mp[i]!=i) return false;
   }
   return true;

 
    
}
    int nextBeautifulNumber(int n) {
        for(int i=n+1;i<=1224444;i++){
            if(isbalanced(i))
            return i;
        }
        return -1;
    }
};
