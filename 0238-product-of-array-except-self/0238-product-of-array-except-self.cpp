class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        vector<int> indx;
        int count =0;
        int otp =1;
        for(int i =0 ; i<nums.size() ;i++)
        {
            if(nums[i] !=0){
                 otp *=nums[i];

            }
            else
            {
                continue;
            }
           
        }
        for(int i =0 ; i<nums.size() ;i++)
        {
            if(nums[i] == 0)
            {
                 
                count++;
                
            }
            else
            {
                continue;
            }
        }
        
        for(int i =0 ; i<nums.size() ; i++)
        {
            if(count == 0 )
            {
                ans.push_back(otp/nums[i]);

            }
            else if(( count ==1)&& (nums[i] ==0))
            {
                ans.push_back(otp);
            }
            else
            {
               ans.push_back(0);
                
            }
        }
        return ans;

    }
};