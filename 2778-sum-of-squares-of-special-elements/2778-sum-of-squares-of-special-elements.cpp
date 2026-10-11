class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum =0;
        int n = nums.size();
        int i =0;
         while(i<n){
            if (n % (i + 1) == 0)
            {
                sum +=nums[i]*nums[i];  
            }
             
            i++;
        }
        return sum;
    }
};