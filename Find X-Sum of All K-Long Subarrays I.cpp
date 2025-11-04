class Solution {
public:
/*
struct cmp {
    bool operator()(pair<int,int> &a, pair<int,int> &b) {
        if (a.first == b.first)
            return a.second < b.second; 
        return a.first <b.first;       
    }
};*/
    vector<int> findXSum(vector<int>& nums, int k, int x) {
          vector<int>ans;
          for(int i=0;i<=nums.size()-k;i++){
               unordered_map<int,int>mp;
               for(int j=i;j<k+i;j++) mp[nums[j]]++;
             //  priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
             priority_queue<pair<int,int>>pq;
               for(auto x:mp) pq.push({x.second,x.first});
               int sum=0;
               int t=x;
               while(t--&&!pq.empty()){
                     cout<<pq.top().second<<" "<<pq.top().first<<endl;
                      sum+=pq.top().first*pq.top().second;
                      pq.pop();
               }
               cout<<endl;
               ans.push_back(sum);
          }
          return ans;
    }

};
