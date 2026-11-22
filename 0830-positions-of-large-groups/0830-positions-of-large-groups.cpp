class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> ans;
        int n = s.size();
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            if(i < n-1 && s[i] == s[i+1])

            {
                count++;
            }
            else
            {
                if(count >= 2)
                {
                    ans.push_back({i-count, i});
                }
                count = 0;
            }
        }

        
        return ans;
    }
};