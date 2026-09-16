class Solution {
public:
    bool isPerfectSquare(int num) {
        long long low =1;
        long long high = num;
        long long mid = (low+high)/2;
        while(low<=high)
        {
            if((mid*mid)>num)
            {
                high = mid-1;
            }
            else if((mid *mid)<num)
            {
                low = mid+1;
            }
            else
            {
                return true;
                
            }
            mid = low + (high -low)/2;
             
        }
        return false;
        
        
    }
};