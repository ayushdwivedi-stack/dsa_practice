class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count =0;
        int m = grid.size();
        int n = grid[0].size();
        for(int z=0 ;z<m ;z++){
            for(int y =0; y<n; y++)
            {
               if(grid[z][y] >= 0)
               {
                continue;
               }
               else{
                count++;
               }

            }

             
        }
        return count;
    }
};