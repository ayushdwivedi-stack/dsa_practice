class Solution {
public:
    char repeatedCharacter(string s) {
        map<int , int> mp;
        for(int x: s)
        {
            mp[x]++;
            if(mp[x] ==2)
            {
                return x;
            }
        }
        return ' ';
    }
};