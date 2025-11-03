class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int time=0;
        if(colors.size()==0) return 0;
        deque<pair<char,int>>q;
        q.push_back({colors[0],neededTime[0]});
        for(int i=1;i<colors.size();i++){
            if(colors[i]==q.back().first)
              {
                if(q.back().second<neededTime[i])
                   {
                    time+=q.back().second;
                      q.pop_back();
                    q.push_back({colors[i],neededTime[i]});
                   }
                   else{
                    time+=neededTime[i];
                   }
              }
              else
              q.push_back({colors[i],neededTime[i]});
        }
        return time;
    }
};
/*
"a     a     a     b     b     b     a     b     b     b      b"
 3     5     10    7     5     3     5     5     4     8      1

 3+5+5+3+4+5+1*/
