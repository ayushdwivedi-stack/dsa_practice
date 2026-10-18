class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int j=0;
        for(int i=nums[0];i<nums[n-1];i++){
            if(j<nums[n-1] && nums[j]!=i)
            ans.push_back(i);
            else 
            j++;
           
        }
        return ans;
    }
};