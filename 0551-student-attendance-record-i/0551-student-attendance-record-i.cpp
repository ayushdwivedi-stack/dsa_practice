class Solution {
public:
    bool checkRecord(string s) {
        int count1 =0;
        int count2=0;
         
        
        
        for(int i =0; i<s.size() ;i++)
        {         
             

             
            if(s[i] == 'A')
            {
                count1++;
            }
            else if((s[i] == 'L')&& (s[i+1] =='L') &&(s[i+2] =='L'))
                 {
                    count2++;
                 }
            else{
                continue;
            }
            
        
        }
        if((count1>=2)||(count2>0))
        {
            return false;
        }
        return true;
        
    }
};