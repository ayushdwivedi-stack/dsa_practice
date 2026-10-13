class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long sum1 = 0;
        long long sum2 =0;
        long long sum =0;
        vector<int>ans;


    for(int i =0; i<nums.size() ; i++)
    {
        ans.push_back(abs(nums[i]));
    }

    sort(ans.begin() , ans.end());



        
        for(int i =0; i<ans.size() ; i++)
        {
            if(i<(ans.size())/2)
            {
                sum1 += abs(ans[i]*ans[i]);
            }
            if(i>=nums.size()/2)
            {
                sum2 += abs(ans[i]*ans[i]);
            }

        }
        sum = abs(sum2 -sum1);
        return sum;
        
    }
};