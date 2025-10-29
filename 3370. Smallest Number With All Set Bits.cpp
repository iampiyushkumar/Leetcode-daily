class Solution {
public:
bool isset(int n){

    while(n){
        if((n&1)==0){
            return false;
        } 
        n=n>>1;
    }
    return true;
}
    int smallestNumber(int n) {
        for(int i=n;i<=10000;i++){
            if(isset(i)==true) return i;
        }
        return 0;
    }
};
