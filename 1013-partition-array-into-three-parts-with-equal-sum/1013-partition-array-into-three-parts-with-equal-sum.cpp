class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = 0;
        int ans = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
        }
        if (sum % 3 != 0) {
            return false;
        }

        ans = sum / 3;

        int count = 0;
        int curr = 0;

        for (int i = 0; i < arr.size(); i++) {
            curr += arr[i];

            if (curr == ans) {
                count++;
                curr = 0;
            }
        }

        return count >= 3;
    }
};
