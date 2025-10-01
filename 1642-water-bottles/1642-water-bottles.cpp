class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=0;
        int left=0;
        while(numBottles>=1){
            ans+=numBottles;
            numBottles+=left;
            left=numBottles%numExchange;
            numBottles/=numExchange;
        }
        return ans;
    }
};