class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        int digit =0;
         
        int j =0;
        for(int i =0 ; i<=n ; i++)
        {
            int  digSum =0; 
            j =i;
            while(j>0){
            digit = j%2;
            digSum += digit;
            j = j/2;
            }
            ans.push_back(digSum);
             
        }
        return ans;
    }
};