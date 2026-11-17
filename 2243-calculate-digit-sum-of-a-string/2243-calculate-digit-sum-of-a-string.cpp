
class Solution {
public:
    string digitSum(string s, int k) {

        while(s.size() > k) {

            string sum = "";

            for(int i = 0; i < s.size(); i += k) {

                int ans = 0;

              for(int j = i; j < i + k && j < s.size(); j++)
                {
                    ans += s[j] - '0';
                }

                sum += to_string(ans);
            }

            s = sum;
        }

        return s;
    }
};
