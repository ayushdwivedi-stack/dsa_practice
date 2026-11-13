class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        int sum1 = 0;
        int sum2 = 0;
        int ans = 0;

    
        for(int i = 0; i < k; i++) {
            sum1 += cardPoints[i];
        }

        ans = sum1;

    
        for(int i = 0; i < k; i++) {
            sum1 -= cardPoints[k - 1 - i];
            sum2 += cardPoints[n - 1 - i];

            ans = max(ans, sum1 + sum2);
        }

        return ans;
    }
};