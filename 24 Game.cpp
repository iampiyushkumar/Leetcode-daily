class Solution {
public:
vector<double>computekaro(double a,double b)
{
    return {a+b,a-b,b-a,a*b,
    (b!=0?a/b:0.0),(a!=0?b/a:0.0)};
}
bool solve(vector<double>&nums)
{
    int n=nums.size();
    if(n==1)
    return abs(nums[n-1]-24.0)<0.00000001;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {  
            
            if(i!=j){
                vector<double>next(n-1);
                int idx=0;
                for(int k=0;k<n;k++)
                {
                    if(i!=k&&j!=k){
                     next[idx++]=nums[k];
                    }
                         
                }
                for(double x:computekaro(nums[i],nums[j]))
                {
                    next[next.size()-1]=x;
                    if(solve(next))
                    return true;
                }
            }

        }
    }
    return false;
}
    bool judgePoint24(vector<int>& cards) {
        vector<double>nums;
        for(auto x:cards)
        nums.push_back(x*1.0);
        return solve(nums);
    }
};
