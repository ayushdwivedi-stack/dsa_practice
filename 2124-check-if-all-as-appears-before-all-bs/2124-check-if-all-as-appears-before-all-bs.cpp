class Solution {
public:
    bool checkString(string s) {
        string ayu ="";
        for(int i = 0 ; i<s.size() ;i++)
        {
            ayu +=s[i];
        }
        sort(ayu.begin() , ayu.end());
        int j =0;
        int i =0;

        while(i<s.size() && j< s.size())
        {
            if(s[i] != ayu[j])
            {
                return false;
            }
            
            j++;
            i++;
        }
        return true;
        
    }
};