class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int count =0;
        set<int>st;
        for(int i =0; i<nums.size() ; i++)
        {
            st.clear();
            for(int j =i; j<nums.size();j++)
            {
              st.insert(nums[j]);
              count += st.size()*st.size();
            }
        }
        return count;
    }
};