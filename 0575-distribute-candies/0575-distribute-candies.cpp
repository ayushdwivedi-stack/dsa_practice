class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int m = candyType.size();
        sort(candyType.begin() , candyType.end());
        candyType.erase(unique(candyType.begin() , candyType.end()),candyType.end());
        int n = candyType.size();
        if(n>(m/2))
        {
            return m/2;
        }
        if((m/2)>n)
        {
            return n;
        }
        return n;

    }
};