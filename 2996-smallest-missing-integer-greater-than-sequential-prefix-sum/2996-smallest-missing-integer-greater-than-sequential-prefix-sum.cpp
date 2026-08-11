class Solution {
public:
    int missingInteger(vector<int>& nums) {
     int ans = nums[0];

for (int i = 1; i < nums.size(); i++) {
    if (nums[i] == nums[i - 1] + 1)
        ans = ans + nums[i];
    else
        break;
}

unordered_set<int> s(nums.begin(), nums.end());

while (s.count(ans))
{
    ans++;
}
return ans;
}
};