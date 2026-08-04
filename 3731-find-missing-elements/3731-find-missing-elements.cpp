class Solution {
private:

bool isElementpresent(vector<int> nums,int k){
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == k){
            return true;
        }
    }
    return false;
}
public:
    vector<int> findMissingElements(vector<int>& nums) {
       int n = nums.size();
       vector<int> ans;
    
        int  min = nums[0];
        int max = nums[0];

        for(int i = 1; i < n; i++){
            if(nums[i] <= min){
                min = nums[i];
            }else if(nums[i] > max){
                max = nums[i];
            }
        }

        for(int i = min + 1; i < max; i++){
            if(isElementpresent(nums,i)){
                continue;
            }else{
                ans.push_back(i);
            }
        }
       
        return ans;
    }
};