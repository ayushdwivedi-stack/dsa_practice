class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> ans;
        int otp =0;
        int indx =0;
        for(int i = 0 ; i< nums.size() ; i++)
        {
            ans.push_back(nums[i]);
        }
        sort(ans.begin() , ans.end());
         
         int n = ans.size();
         if(ans[n-1] >= 2 * ans[n-2])
         {
            otp = ans[n-1];
         }
         else
         {
            return -1;
         }
         for(int i =0; i<nums.size() ; i++)
         {
            if(nums[i] == otp)
            {
                indx = i;
            }

         }
        
  return indx;
        
    }
};