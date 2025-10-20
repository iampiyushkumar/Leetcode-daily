class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int val=0;
        for(auto x:operations){
            if(x[0]=='+'||x[1]=='+') val++;
            else val--;
        }
        return val;
    }
};
