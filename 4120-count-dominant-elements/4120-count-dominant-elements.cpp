class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        if(nums.size() == 1)
        {
            return 1;
        }
        int count =0;
        int n =nums.size();

        if(nums[0] >= nums[1])
            {
               count++;
            }
        if(nums[n-1]>=nums[n-2])
            {
                count++;
            }
        for(int i = 1; i<nums.size()-1 ; i++)
        {
             
            if(2*nums[i] >= (nums[i-1]+nums[i+1])){
                count++;
            }

        }
        return count;
    }
};