class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> s1, s2;

        s1.push_back(nums[0]);
        s2.push_back(nums[1]);

        for (int i = 2; i < nums.size(); i++) {
            if (s1.back() > s2.back()) {
                s1.push_back(nums[i]);
            } 
            else {
                s2.push_back(nums[i]);
            }
        }

        
        s1.insert(s1.end(), s2.begin(), s2.end());

        return s1;
    }
};