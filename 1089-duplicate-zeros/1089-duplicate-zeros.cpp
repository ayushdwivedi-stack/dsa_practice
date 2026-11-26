class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        int i = 0;
        int m = ans.size();
        while(m<n)
        {
            if(arr[i] == 0)
            {
                ans.push_back(0);
                ans.push_back(0);
            }
            else{
                ans.push_back(arr[i]);  
            }
            m = ans.size();
            i++;
        }
        if(ans.size() >n)
        {
            ans.pop_back();
        }
        arr = ans;
        
    }
};