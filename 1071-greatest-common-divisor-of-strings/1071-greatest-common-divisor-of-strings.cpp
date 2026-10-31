class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n = gcd(str1.size(), str2.size());
        string otp = str1.substr(0, n);
        if(str1 + str2 == str2 + str1)
        {
            return otp;

        }
        return "";
        
    }
};