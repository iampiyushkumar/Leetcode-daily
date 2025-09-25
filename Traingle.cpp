class Solution {
public:
int dp[201][201];
   int find(int r, int c,vector<vector<int>>&triangle)
   {
    if(r>=triangle.size()-1)
    return triangle[r][c];
    if(dp[r][c]!=-1)
    return dp[r][c];
    return dp[r][c]=triangle[r][c]+min(find(r+1,c,triangle),find(r+1,c+1,triangle));

   }
    int minimumTotal(vector<vector<int>>& triangle) {
        memset(dp,-1,sizeof(dp));
        return  find(0,0,triangle);
    }
};
