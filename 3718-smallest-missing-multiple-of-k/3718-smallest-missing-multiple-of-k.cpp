class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        map<int, int> mp;

        for (int x : nums) {
            mp[x]++;
        }

        int multiple = k;

        while (mp[multiple] > 0) {
            multiple += k;
        }

        return multiple;
    }
};