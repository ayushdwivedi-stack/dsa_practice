class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string> ans;
        map<string , int> mp;
       for(string x : arr)
        {
            mp[x]++;
        }
        
    
        for(int i =0; i< arr.size() ; i++)
         {
            if(mp[arr[i]]==1)
            {
                ans.push_back(arr[i]);
            }
            
         }
         if(ans.size() <k)
         {
            return "";
         }
         return ans[k-1];
        
    }
};