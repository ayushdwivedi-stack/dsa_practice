class Solution {
public:
    int longestPalindrome(string s) {
        int count =0;
        map<char , int>mp;
        for(int x : s)
        {
            mp[x]++;
        }
        for(auto it : mp)
        {
            if(it.second % 2 == 0)
            {
              count+=it.second;
            
            }
            else
            {
               count += (it.second / 2) * 2;
            }
        }
         
         if(count == s.size())
         {
             return count;
         }
        return count+1;
                
    }
};