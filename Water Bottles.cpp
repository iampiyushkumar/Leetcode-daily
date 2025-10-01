class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
      int piyabottle=numBottles;
      int khalibottle=numBottles;
      for(int i=1;i<=khalibottle;i++)
      {
        if(i%numExchange==0)
        {
            piyabottle++;
            khalibottle++;
        }
      }
      return piyabottle;

    }
};
