class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum1= 0;
        int sum2 =0;
        int ans =0;
        int m = mat.size();
        int n = mat[0].size();
        for(int i = 0 ; i<m; i++)
        {
            for(int j =0; j<n ; j++)
            {
                if( i==j)
                {
                    sum1 += mat[i][j];
                }
                if(i+j == n-1)
                {
                    sum2 += mat[i][j];
                }
                 
            }
        }
        if(n%2 != 0)
        {
            sum1 = sum1- mat[n/2][n/2];
            ans = sum1 + sum2;
            return ans;
        }
             
         ans = sum1 + sum2;
        
        return ans;
        
    }
};