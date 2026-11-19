class Solution {
public:
    int countDigits(int num) {
        vector<int> ans;
        int count =0;
        int a = num;
        while(a>0)
        {
            int digit = a%10;
            ans.push_back(digit);
            a = a/10;
        }
        for(int i =0 ; i<ans.size() ; i++)
        {
            if(num%ans[i] == 0)
            {
                count++;
            }
        }
        return count;
    }
};