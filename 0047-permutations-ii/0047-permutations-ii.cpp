class Solution {
private:
        void getPer(vector<vector<int>>& ans, vector<int> nums, int i)
        {
            if(i == nums.size())
            {
                    ans.push_back(nums);
                    return;
            }
            set<int>st;

            for(int j = i; j < nums.size(); j++){
                 if(st.count(nums[j])){
                  continue;
                 }
                st.insert(nums[j]);
                swap(nums[j],nums[i]);
                getPer(ans,nums,i + 1);
                swap(nums[j],nums[i]);
    }
        }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         vector<vector<int>>ans;
         getPer(ans, nums, 0);

         return ans;
        
    }
};
 
 
 