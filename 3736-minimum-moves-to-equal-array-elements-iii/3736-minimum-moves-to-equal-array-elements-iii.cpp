class Solution {
public:
    int minMoves(vector<int>& nums) {
        int massi = nums[0];
        int ans =0; 
        
        for(int i =0 ; i< nums.size() ; i++)
        {
            if(massi < nums[i])
            {
                massi = nums[i];
            }
        }
         
        for(int i =0 ; i< nums.size() ; i++)
        {
            ans += massi - nums[i]; 
        }
        
        return ans; 
    }
};