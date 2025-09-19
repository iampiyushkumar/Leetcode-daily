class Spreadsheet {
public:
vector<vector<long long>>ans;
    Spreadsheet(int rows) {
        ans.resize(rows, vector<long long>(26, 0));
    }
    
    void setCell(string cell, int value) {
        int col=cell[0]-'A';
        string str=cell.substr(1,cell.size());
        int row=stoi(str);
        ans[row-1][col]=value;
    }
    
    void resetCell(string cell) {
        int col=cell[0]-'A';
        string str=cell.substr(1,cell.size());
        int row=stoi(str);
        ans[row-1][col]=0;
    }
    
    int getValue(string f) {
        int value1=0;
        int value2=0;
       string temp1,temp2;
       int col1=-1;
       int col2=-1;
        int n=f.size();
        bool ope=false;
        
          for(int i=0;i<n;i++)
          {
            if(f[i]=='=') continue;
            if(f[i]=='+'){
                if(col1!=-1)
                {
                    int row=stoi(temp1);
                    value1=ans[row-1][col1];
                }
                else{
                    value1=stoi(temp1);
                }
                ope=true;
            }
            if(value1==0&&ope==false)
            {
                if(isalpha(f[i])){
                    col1=f[i]-'A';
                    
                }
                else{
                    temp1+=f[i];
                }
            }
            else{
                if(isalpha(f[i])){
                    col2=f[i]-'A';
                }
                else{
                    temp2+=f[i];
                }
            }
          }
          if(col2!=-1)
          {
            int row=stoi(temp2);
            value2=ans[row-1][col2];
          }
          else{
            value2=stoi(temp2);
          }
          return value1+value2;
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */
