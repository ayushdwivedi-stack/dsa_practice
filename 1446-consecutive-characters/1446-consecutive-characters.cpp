class Solution {
public:
    int maxPower(string s) {
         int count = 1;
         int maxCount =1;
         for(int i =0; i< s.size() ; i++)
         {
            if(s[i] == s[i+1])
            {
                count++;
            }
            else
            {
                count =1;
                continue;
            }
            maxCount = max(maxCount , count);
            
         }
         return maxCount;
        
    }
};