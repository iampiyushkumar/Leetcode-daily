class Solution {
public:
void insert(vector<int>&ans,int &n)
{
    int num=1;
     while(n>0)
        {
           ans.push_back(num);
           ans.push_back(num*-1);
           num++;
           n-=2;
        }
}
    vector<int> sumZero(int n) {
        vector<int>ans;
        if(n%2==0)
        insert(ans,n);
        else {
            ans.push_back(0);
            n--;
            insert(ans,n);
        }
       return ans;
        
    }
};
