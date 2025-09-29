class Solution {
public:
int dp[51][51];
int find(int i, int j,vector<int>&values){
    if(i+1>=j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans=INT_MAX;
    for(int k=i+1;k<j;k++)
    {
        ans=min(ans,values[i]*values[k]*values[j]+find(i,k,values)+find(k,j,values));
    }
    return  dp[i][j]=ans;

}
    int minScoreTriangulation(vector<int>& values) {
  int   n=values.size();
        memset(dp,-1,sizeof(dp));
        return find(0,n-1,values);
    }
};
