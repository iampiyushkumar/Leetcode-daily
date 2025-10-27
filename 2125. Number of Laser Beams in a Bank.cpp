class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int cnt=0;
        int prev=0;
        for(int i=0;i<bank.size();i++){
             
             int curr=0;
             for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1') curr++;
             }
             if(curr==0) continue;
             if(prev==0){
                prev=curr;
             }
             else{
                cnt+=(prev*curr);
                prev=curr;
             }
        }
        return cnt;
    }
};
