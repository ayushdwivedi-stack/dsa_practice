class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int bhari = numBottles;
        int khali = 0;
        int total = numBottles;

        while (bhari + khali >= numExchange) {
            int exchange = (bhari + khali) / numExchange;
            khali = (bhari + khali) % numExchange;
            bhari = exchange;
            total += bhari;
        }

        return total;
    }
};