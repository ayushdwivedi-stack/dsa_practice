class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro =1;
        int sum =0;
        int digit =0;
        int ans =0;
        while(n>0)
        {
            digit = n%10;
            sum += digit;
            pro *= digit;
            n = n/10;
        } 
           ans = pro - sum ;
           return ans;
        
    }
};