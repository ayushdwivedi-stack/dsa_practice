class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        sort(begin(nums) , end(nums));
        for( int i = 0 ; i<n ; i++)
        {
            if(nums[i] == val)
            {
              nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
            }

        }
        return nums.size();
        
    }
};