class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i =left; i<=right ; i++)
        {
            int ayu = i;
            bool dubey = true ;
            while(ayu>0)
            {
                int digit = ayu%10;
                if(digit == 0 || i % digit != 0)
                {
                    dubey = false;
                    break;
                }
                
                ayu = ayu/10;
            }
            if(dubey == true)
            {
            ans.push_back(i);
            }
             
            
        }
        
        return ans;
        
    }
};