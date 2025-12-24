class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalsum=accumulate(apple.begin(),apple.end(),0);
        sort(capacity.begin(),capacity.end(),greater<int>());
        int sum=0;
        for(int i=0;i<capacity.size();i++){
              sum+=capacity[i];
              if(sum>=totalsum)
              return i+1;
        }
        return 0;
    }
};
