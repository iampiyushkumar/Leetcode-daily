class Solution {
public:
    int countUnguarded(int n, int m, vector<vector<int>>& guards, vector<vector<int>>& walls) {
       vector<vector<int>>grid(n,vector<int>(m,1));
    //2means gaurd,3 means walls and -1 means gaurded place
       for(auto x:guards) grid[x[0]][x[1]]=2;
       for(auto x:walls)   grid[x[0]][x[1]]=3;
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
              
              if(grid[i][j]==2){
                   //right
                   for(int k=j+1;k<m;k++){
                       if(grid[i][k]==2||grid[i][k]==3) break;
                       if(grid[i][k]>0)
                       grid[i][k]*=-1;
                   }
                   //left
                   for(int k=j-1;k>=0;k--){
                         if(grid[i][k]==2||grid[i][k]==3) break;
                          if(grid[i][k]>0)
                       grid[i][k]*=-1;
                   }
                   //up
                   for(int k=i-1;k>=0;k--){
                   
                      if(grid[k][j]==2||grid[k][j]==3) break;
                      if(grid[k][j]>0)  grid[k][j]*=-1;
                   }
                   //down
                   for(int k=i+1;k<n;k++){
                
                          if(grid[k][j]==2||grid[k][j]==3) break;
                     if(grid[k][j]>0)  grid[k][j]*=-1;
                   }
              }
        }
       }
       int cnt=0;
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1)  cnt++;
        }
       }
       return cnt;
      
    }
};
