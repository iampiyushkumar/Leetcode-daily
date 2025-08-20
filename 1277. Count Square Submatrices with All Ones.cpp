class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        if(n==0) return 0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==1&&i>0&&j>0)
                {
                  matrix[i][j]=min({matrix[i-1][j-1],matrix[i][j-1],matrix[i-1][j]})+1;
                }
                //cout<<matrix[i][j]<<endl;
                ans+=matrix[i][j];
            }
        }
        return ans;
    }
};
/*
res=1+2+2+1+2+3

0. 1.  1.  1
1  1.  2.  2
0. 1.  2.  3

*/
