class Solution {
public:
int n,m;
int K;
const int Mod=1e9+7;
    vector<vector<vector<int>>> dp; 
int dfs(vector<vector<int>>&grid,int i, int j, int rem){

     if(i==n-1&&j==m-1) {
        if((grid[i][j]+rem)%K==0) return 1;
        return 0;
     }
   ///  if (i >= n || j >= m) return 0;
   
   if(dp[i][j][rem]!=-1) return dp[i][j][rem];

  int nrem=(rem+grid[i][j])%K;
     long long cnt=0;
     if(i+1<n) cnt+=dfs(grid,i+1,j,nrem);
     if(j+1<m) cnt+=dfs(grid,i,j+1,nrem);
     return dp[i][j][rem]= cnt%Mod;

}
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        n=grid.size();
        m=grid[0].size();
        K=k;
   dp.assign(n,vector<vector<int>>(m,vector<int>(k,-1)));
    return dfs(grid,0,0,0);
    }
};
