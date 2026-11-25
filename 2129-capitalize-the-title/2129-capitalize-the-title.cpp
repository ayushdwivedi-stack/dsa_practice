class Solution {
public:
    string capitalizeTitle(string title) {
        string word = "";
        string ans = "";

        for(int i = 0; i < title.size(); i++)
        {
            if(title[i] != ' ')
            {
                word += title[i];
            }
            else
            {
                if(word.size() >= 3)
                {
                    ans += toupper(word[0]);

                    for(int j = 1; j < word.size(); j++)
                    {
                        ans += tolower(word[j]);
                    }
                }
                else
                {
                    for(int k = 0; k < word.size(); k++)
                    {
                        ans += tolower(word[k]);
                    }
                }

                ans += ' ';
                word = "";
            }
        }

    
        if(word.size() >= 3)
        {
            ans += toupper(word[0]);

            for(int j = 1; j < word.size(); j++)
            {
                ans += tolower(word[j]);
            }
        }
        else
        {
            for(int k = 0; k < word.size(); k++)
            {
                ans += tolower(word[k]);
            }
        }

        return ans;
    }
};