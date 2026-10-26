class Solution {
public:
    int xorOperation(int n, int start) {
        int ans =0;
        vector<int> otp;
        for(int i =0 ; i<n ; i++)
        {
            otp.push_back( start + (2*i));

        }
        for(int i= 0 ; i<otp.size() ; i++)
        {
            ans = ans^otp[i];
        }
        return ans;
        
    }
};