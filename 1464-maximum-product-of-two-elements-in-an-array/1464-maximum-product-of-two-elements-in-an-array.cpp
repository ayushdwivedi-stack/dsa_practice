class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest = 0;
        int sec_largest = 0;
        for (int & nums : nums)
        {
            if(nums > largest)
            {
                sec_largest = largest;
                largest = nums;
            }
            else
            {
                sec_largest = max(sec_largest , nums);
            }
        }
        return (largest - 1)*(sec_largest -1);
        
    }
};