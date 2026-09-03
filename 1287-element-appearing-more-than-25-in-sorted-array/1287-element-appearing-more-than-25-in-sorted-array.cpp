class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {

        map<int, int> mp;
        int n = arr.size();

        for (int x : arr) {
            mp[x]++;
        }

        for (int x : arr) {
            if (mp[x] > n / 4) {
                return x;
            }
        }

        return -1;
    }
};