class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        int left = numBottles;

        while(left >= numExchange){
            int new_full = left / numExchange;
            int leftover = left % numExchange;
            ans += new_full;
            left = leftover + new_full;
        }
        return ans;
    }
};
