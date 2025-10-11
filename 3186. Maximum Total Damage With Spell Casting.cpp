class Solution {
public:
long long find(vector<pair<long long,long long>>&v,int idx,vector<long long>&dp){
    if(idx>=v.size()) return 0;

    if(dp[idx]!=-1) return dp[idx];

    long long skip=find(v,idx+1,dp);
    int j=idx+1;
    while(j<v.size()&&v[idx].first+2>=v[j].first) j++;
    long long take=v[idx].second+find(v,j,dp);

    return dp[idx]=max(skip,take);

}
    long long maximumTotalDamage(vector<int>& power) {
        map<long long,long long>mp;
        int n=power.size();
        for(auto x:power){
            mp[x]+=x;
        }
        vector<pair<long long,long long>>v;
        for(auto x:mp){
            v.push_back({x.first,x.second});
        }
        sort(v.begin(),v.end());
        vector<long long>dp(n+1,-1);
      return  find(v,0,dp);

    }
};
