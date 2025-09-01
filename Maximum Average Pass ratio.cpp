class Solution {
public:
   double find(int pass, int total) {
        return (1.0 * (pass + 1) / (total + 1)) - (1.0 * pass / total);
    }

    double maxAverageRatio(vector<vector<int>>& classes, int exstud) {
          priority_queue<pair<double, pair<int, int>>> pq;
        for(auto x:classes)
        {
            int pass=x[0];
            int total=x[1];
            double diff=find(pass,total);
            pq.push({diff,{pass,total}});
        }
        while(pq.size()>0&&exstud--)
        {
            int pass=pq.top().second.first+1;
            int total=pq.top().second.second+1;
            double diff=find(pass,total);
            pq.pop();
            pq.push({diff,{pass,total}});
        }
        
         double avg = 0.0;
        while (!pq.empty()) {
            auto [diff, p] = pq.top();
            pq.pop();
            avg += 1.0 * p.first / p.second;
        }
        return avg/classes.size()*1.0;
        
    }
};
