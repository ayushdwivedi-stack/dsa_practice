class Solution {
public:
    int countValidPrefixes(string s) {
        int count =0;
        int zero =0;
        int one =0;
        for(int i = 0 ; i< s.size() ; i++)
        {
            if(s[i] == '0')
            {
                zero++;
                
            }
            if(s[i] =='1')
            {
                one++;
            }
            if((zero + one)%2 ==0)
            {
                if(zero == one){
                count++;
                }

            }
            if(abs(zero -one) ==1)
            {
                count++;
            }
            
             
        }
         
        
        return count;
    }
};