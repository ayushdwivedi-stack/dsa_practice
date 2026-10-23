class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        
        int freq =0;
        int j =1;
        for(int i =0; i< nums.size() ;i=i+2)
        {
            
            freq = nums[i];
            while((freq >0)&&(j<nums.size())) 
            {
            ans.push_back(nums[j]);
            freq--;
            }
           j = j+2;
            


        }
        return ans;
        
    }
};