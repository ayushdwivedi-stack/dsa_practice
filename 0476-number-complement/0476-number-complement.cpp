class Solution {
public:
    int findComplement(int num) {
        vector<int> bit;

        int dec =0;
        int p = num;
        while(p>0){
             int digit= p%2;
            if(digit ==0)
            {
                bit.push_back(1);
            }
            else
            {
                bit.push_back(0);
            }
            p = p/2; 
        }
        reverse(bit.begin(), bit.end());

        int deci = 0;

        for (int x : bit) {
            deci = deci * 2 + x;
        }

        return deci;
    }
};