class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;
        stringstream ss(s);

       while(ss >> word)
       {
        words.push_back(word);
       }
       if(words.size() != pattern.size())
       {
        return false;
       }
        map<char,string> mp;
        map<string,char> mp2;
        
        for(int i =0 ;i<pattern.size();i++)
        {
            if(mp.find(pattern[i]) != mp.end())
            {

             if(mp[pattern[i]] != words[i])
             {
             return false;
             }
            }
            if(mp2.find(words[i]) != mp2.end())
            {
            if(mp2[words[i]] != pattern[i])
            return false;
            }
            mp[pattern[i]] = words[i];
            mp2[words[i]] = pattern[i];
        }
        return true;
    }
};