class Solution {
public:
    bool checkDivisibility(int n) {
       int sum = 0;
       int prod = 1;
        
        int digit = n;
       while(n > 0)
       {
        int temp = n%10;
        sum = sum + temp;
        prod = prod*temp;
        n  = n/10;

       }

       if(digit % ( sum + prod) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};
 