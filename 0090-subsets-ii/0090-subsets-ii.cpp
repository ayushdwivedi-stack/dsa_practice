class Solution {
    void Subset(vector<int>& nums , vector<int>& ans , int i ,  vector<vector<int>>& output)
    {
        if(i==nums.size())
        {
            output.push_back(ans);
            return;
        }
       ans.push_back(nums[i]);
       Subset(nums , ans , i+1 , output);
       ans.pop_back();

       int indx =i+1;

        while((indx<nums.size() )&&  (nums[indx] == nums[indx-1]))
            indx++;
        Subset(nums, ans , indx , output);
         

    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int>ans;
        sort(nums.begin() , nums.end());
        Subset(nums , ans , 0 , output);
        return output;

        
    }
};