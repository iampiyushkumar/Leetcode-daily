class Solution {
public:
int dp[601][101][101];
int find(vector<string>&strs,int m,int n, int idx){
     if(idx>=strs.size()) return 0;
     if(dp[idx][m][n]!=-1) return dp[idx][m][n];
     int cntone=0,cntzero=0;
     for(auto x:strs[idx]){
        if(x=='0') cntzero++;
        if(x=='1') cntone++;
     }
     int take=0;
     if(m-cntzero>=0&&n-cntone>=0)
     take=1+find(strs,m-cntzero,n-cntone,idx+1);

     int nottake=find(strs,m,n,idx+1);
     return  dp[idx][m][n]=max(take,nottake);
}
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(dp,-1,sizeof(dp));
        return find(strs,m,n,0);
    }
};
