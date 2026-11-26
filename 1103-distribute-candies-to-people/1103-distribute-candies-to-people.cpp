
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people, 0);
        int candy = 1;
        int i = 0;

        while(candies > 0)
        {
            int rem = min(candies, candy);

            ans[i] += rem;
            candies -= rem;

            candy++;
            i = (i + 1) % num_people;
        }

        return ans;
    }
};
