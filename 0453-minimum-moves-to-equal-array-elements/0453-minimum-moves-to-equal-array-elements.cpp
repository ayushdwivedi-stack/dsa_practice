class Solution {
public:
    int minMoves(vector<int>& nums) {
    int mini = nums[0];

    for(int i = 1; i < nums.size(); i++)
    {
    if(nums[i] < mini)
    {
        mini = nums[i];
    }
    }
        
     int ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            ans += nums[i] - mini;
        }

        return ans;
    }
};