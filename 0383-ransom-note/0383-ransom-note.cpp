class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        map<char, int> mp;

        for(char y : magazine)
        {
            mp[y]++;
        }

        for(int j = 0; j < ransomNote.size(); j++)
        {
            if(mp[ransomNote[j]] == 0)
            {
                return false;
            }

            mp[ransomNote[j]]--;
        }

        return true;
    }
};