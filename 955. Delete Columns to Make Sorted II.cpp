class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs.size();
        int m=strs[0].size();
        int deletecnt=0;
        vector<bool>ordering(n-1,false);
        for(int i=0;i<m;i++){
            bool flag=false;
            for(int j=0;j<n-1;j++){
                if(ordering[j]==false){
                    if(strs[j][i]>strs[j+1][i])
                        {
                            flag=true;
                            break;
                        }
                }
            }
            if(flag==true){
                deletecnt++;
                continue;
            }
            for(int j=0;j<n-1;j++){
                if(ordering[j]==false){
                    if(strs[j][i]<strs[j+1][i])
                       ordering[j]=true;
                }
            }
        }
        return deletecnt;
    }
};
