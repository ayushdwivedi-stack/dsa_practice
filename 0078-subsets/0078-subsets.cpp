class Solution {

private:
void subSet(vector<int>& nums , vector<int>&ans , int i ,vector<vector<int>>&output)
{
    if(i==nums.size())
    {
        output.push_back(ans);
        return;
    }
    ans.push_back(nums[i]);
    subSet(nums, ans , i+1 ,output);

    ans.pop_back();
     subSet(nums, ans , i+1 ,output);

    
}


public:
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>>output;
         vector<int>ans;
         subSet(nums , ans , 0 , output);
         return output;



        
    }
};