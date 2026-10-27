class Solution {
public:
    string thousandSeparator(int n) {
        string ans ="";
        int count =0;
        if(n==0)
        {
            return "0";
        }
         while(n>0)
         {
            int digit = n%10;
           ans += to_string(digit);
            count++;
            n= n/10;
 
            if((count ==3)&&(n>0))
            {
                ans.push_back('.');
                count =0;
            }
        } 
        reverse(ans.begin() , ans.end());

        return ans;      
    }
};