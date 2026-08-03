class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int digitCount = 0;

            if (num == 0)
                digitCount = 1;

            while (num > 0) {
                digitCount++;
                num /= 10;
            }

            if (digitCount % 2 == 0)
                ans++;
        }

        return ans;
    }
};