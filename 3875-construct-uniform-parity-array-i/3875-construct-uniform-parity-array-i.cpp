class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector<int>ans;
        int n = nums1.size();
       for(int i =n-1;i>0 ;i--)
        {
            if(nums1[i]%2)
            {
                return true;
                 
                
            }
            else if (nums1[i]%2 !=2)
            {
                nums1[i]-=nums1[i-1];
            }
            else
            {
                return false;
            }

            
              

        }
        return true;

      
    }
};