class Solution {
public:
    bool detectCapitalUse(string word) {
        int cap =0;
        int small =0;
        for(int i =0 ; i< word.size() ; i++)
        {
            if(isupper(word[i]))
            {
                cap++;
            }
            if(islower(word[i]))
            {
                small++;
            }
        }
        int n = word.size();
        if(cap == n )
        {
            return true;
        }
        if(isupper(word[0]) && small == n-1)
        {
            return true;
        }
        if(small == n)
        {
         return true;
        }
        return false;
    }
};