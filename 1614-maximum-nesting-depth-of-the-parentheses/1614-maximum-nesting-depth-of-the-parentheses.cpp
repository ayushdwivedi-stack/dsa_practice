class Solution {
public:
    int maxDepth(string s) {
        int maxCount =0;
        int count =0;
        for(int i =0 ; i< s.size() ;i++)
        {
            if(s[i] == '(')
            {
                count++;
            }
            else if(s[i] == ')')
            {
                 
                count--;
            }
            else
            {
                continue;
            }
            maxCount = max(maxCount , count);

        }
        return maxCount;
        
    }
};