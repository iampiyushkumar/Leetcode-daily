class Solution {
public:
int n,m;
int rows[4]={-1,1,0,0};
int cols[4]={0,0,-1,1};
bool isvalid(int i, int j)
{
    return i>=0&&j>=0&&i<n&&j<m;
}
void dfs(int i, int j,vector<vector<bool>>&ocean,vector<vector<int>>&heights)
{
    ocean[i][j]=true;
    for(int k=0;k<4;k++)
    {
        int nx=i+rows[k];
        int ny=j+cols[k];
        if(isvalid(nx,ny)&&ocean[nx][ny]==false&&heights[nx][ny]>=heights[i][j]){
            dfs(nx,ny,ocean,heights);
        }
    }
}
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
         n=heights.size();
         m=heights[0].size();
         vector<vector<int>>ans;
        vector<vector<bool>>pacific(n,vector<bool>(m,false));
        vector<vector<bool>>atlantic(n,vector<bool>(m,false));
        for(int j=0;j<m;j++){
                  dfs(0,j,pacific,heights);
                  dfs(n-1,j,atlantic,heights);
        } 
        for(int i=0;i<n;i++){
                      dfs(i,0,pacific,heights);
                      dfs(i,m-1,atlantic,heights);
        }

   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    {
        if(pacific[i][j]==true&&atlantic[i][j]==true)
         ans.push_back({i,j});
    }
   }
return ans;
    }
};
