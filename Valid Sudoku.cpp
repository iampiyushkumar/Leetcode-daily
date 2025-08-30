class Solution {
public:
bool ispossible(vector<vector<char>>&board,int row,int col,char ch)
{
    for(int j=0;j<9;j++) if(board[row][j]==ch){
        //cout<<row<<" "<<j<<endl;
        return false;
    } 
    for(int i=0;i<9;i++) if(board[i][col]==ch){
        //cout<<i<<" "<<col<<endl;
        return false;
    } 

    for(int k=0;k<9;k++)
    {
        if(board[3*(row/3)+k/3][3*(col/3)+k%3]==ch){
           // cout<<row+k/3<<" "<<col+k%3<<endl;
            return false;
        }
    }
    return true;
}
    bool isValidSudoku(vector<vector<char>>& board) {
       for(int i=0;i<9;i++)
       {
        for(int j=0;j<9;j++)
        { 
            
            if(board[i][j]!='.')
            { char ch=board[i][j];
                board[i][j]='.';
              if(ispossible(board,i,j,ch)==false){
             //  cout<<ch<<" "<<i<<" "<<j<<endl;
               return false;
              }
                
                board[i][j]=ch;
            } 

        }
       }
       return true;
    }
};
