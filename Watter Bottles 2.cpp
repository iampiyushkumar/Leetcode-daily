class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int piya=numBottles;
        
        for(int khalibottle=numBottles;khalibottle>=numExchange;numExchange++)
        {
             piya++;
             khalibottle-=numExchange-1;
        }
        return piya;
    }
};
