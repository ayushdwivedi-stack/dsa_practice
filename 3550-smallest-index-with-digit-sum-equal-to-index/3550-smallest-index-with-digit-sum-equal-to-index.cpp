class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int digit =0;
        int sum =0;
 
        for(int i = 0; i<n; i++)
        {
            int ans = nums[i];
            while(ans>0){

            digit = ans%10;
            sum+=digit;
            ans = ans/10;
            }
            if(sum==i)
            {
                return i;
            } 
            sum =0;
        }
        return -1;
    }
};