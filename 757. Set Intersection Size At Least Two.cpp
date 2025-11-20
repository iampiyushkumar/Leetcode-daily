class Solution {
public:
static bool cmp(vector<int>&a,vector<int>&b){
    if(a[1]==b[1]) return a[0]>b[0];
    return a[1]<b[1];
}
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        int a=-1;
        int b=-1;
        int res=0;
        for(auto x:intervals){
            int l=x[0];
            int r=x[1];
            if(l>b)
            {
                a=r-1;
                b=r;
                res+=2;
            }
            else if(l>a){
                a=b;
                b=r;
                res+=1;

            }
        }
        return res;
    }
};
