class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int>f={0,0,0};
        for(auto x:nums){
            vector<int>temp=f;
            for(int i=0;i<3;i++){
                 temp[(x+f[i])%3]=max(temp[(x+f[i])%3],f[i]+x);
              //   cout<<temp[i]<<" ";
            }
            //cout<<endl;
            f=temp;
        }
        return f[0];
    }
};
