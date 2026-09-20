class Solution {
public:
    string reversePrefix(string s, int k) {
        int j=k-1;
        int i=0;
         while((i<=k)&& (j>=i))
         {
            swap(s[i] ,s[j]);
            i++;
            j--;
         }
         return s;
    }
};