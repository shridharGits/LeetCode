class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;
        int emptyBottlesLeft = numBottles;
        int filledWaterBottles = 0;
        while(emptyBottlesLeft >= numExchange)
        {
            emptyBottlesLeft-=numExchange;
            emptyBottlesLeft++;
            numExchange++;
            ans++;
        }
        return ans;
    }
};