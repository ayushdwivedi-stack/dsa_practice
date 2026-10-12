class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
       vector<int> ans;

            for(int i = 0; i < heights.size(); i++) {
                ans.push_back(heights[i]);
            }

            sort(ans.begin(), ans.end());
            int j =0;
        for(int i =0 ; i<heights.size();i++)
        {
            if(heights[i] == ans[j])
            {
               j++;
               continue;
                
            }
            else
            {
                count++;
            }
            j++;
             
        }
        return count;
    }
};