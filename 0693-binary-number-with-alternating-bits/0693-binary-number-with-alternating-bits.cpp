class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int> ans;
        int digit =0;
        while(n>0)
        {
            int sum =0;
            digit = n%2;
            ans.push_back(digit);
            n = n/2;
        }
        for(int i =0; i<ans.size()-1 ; i++)
        {
            if(ans[i] == ans[i+1])
            {
                return false;
            }
            else
            {
                continue;
            }
        }
        return true;
    }
};