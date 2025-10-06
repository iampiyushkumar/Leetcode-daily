class Solution {
public:
int rows[4]={-1,1,0,0};
int cols[4]={0,0,-1,1};

    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        //pair<int,pair<int,int>>
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        vector<vector<int>>visited(n,vector<int>(m,0));


        pq.push({grid[0][0],{0,0}});
        while(!pq.empty()){
            int x=pq.top().second.first;
            int y=pq.top().second.second;
            int val=pq.top().first;
            pq.pop();
            if(visited[x][y]) continue;
            visited[x][y]=1;
            
            if(x==n-1&&y==m-1){
                return val;
            }
            for(int k=0;k<4;k++)
            {
                int nx=x+rows[k];
                int ny=y+cols[k];
                if((nx>=0&&ny>=0&&nx<n&&ny<m)&&visited[nx][ny]==0)
                {
 int nt = max(val, grid[nx][ny]);
                    pq.push({nt,{nx,ny}});
                }
            }

        }
        return -1;

    }
};
