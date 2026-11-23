class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans;
        vector<int> otp;
        for(int i = 0; i < score.size(); i++) {
            otp.push_back(score[i]);
        }

        sort(otp.begin(), otp.end(), greater<int>());

        for(int i = 0; i < score.size(); i++) {

            int rank = find(otp.begin(), otp.end(), score[i]) - otp.begin();

            if(rank == 0) {
                ans.push_back("Gold Medal");
            }
            else if(rank == 1) {
                ans.push_back("Silver Medal");
            }
            else if(rank == 2) {
                ans.push_back("Bronze Medal");
            }
            else {
                ans.push_back(to_string(rank + 1));
            }
        }

        return ans;
    }
};