class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans;
        vector<int> odd;
        int n = nums.size();
         


        for(int i = 0; i<n; i++)
        {
            if(nums[i]%2 ==0)
            {
                ans.push_back(nums[i]);
            }
            else {
                odd.push_back(nums[i]);
            }
            
        }
        for(int j =0; j< odd.size() ;j++)
        {
            ans.push_back(odd[j]);

        }

         
        return ans;
        
    }
};