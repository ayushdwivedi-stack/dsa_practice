class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans;
        map<int ,int>mp;
        for(int x: arr2)
        {
            mp[x]++;
        }
         
        for(int j =0  ; j<arr2.size() ; j++)
        {
            for(int i =0; i<arr1.size() ; i++)
            {
            if(arr1[i] ==arr2[j])
            {
                ans.push_back(arr1[i]);
            }
            else{
                continue;
            }
        }
            
            
            
        }
        sort(arr1.begin() , arr1.end());
        for(int j =0 ; j<arr1.size() ;j++)
        {
            if(mp[arr1[j]] ==0 )
            {
                ans.push_back(arr1[j]);
            }
        }
        return ans;
        
    }
};