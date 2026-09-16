class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans =0;
        map<int , int>mp;
        for(int x : nums)
        {
            mp[x]++;
        }
        
         for(int i=0; i<=nums.size() ;i++)
         {
            if(mp[i] ==0)
            {
                ans = i;
            }
         }
         return ans;     
        
    }
};