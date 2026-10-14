class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) {
            return "";
        }

        string output = "";

        for (int i = 0; i < num; i++) {
            int digit = min(9, sum);

            output += to_string(digit);
            sum -= digit;
        }

        return output;
    }
};