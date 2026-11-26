class Solution {
public:
    bool canAliceWin(int n) {
        
        int a =10;
        int ayu=0;
        

        if(n<10)
        {
            return false;
        }
        
        
            while( n>0&&n >=a)   
            {
              n = n-a;
              a--;
              
              
            }
            if(a%2 ==0)
            {
                return false;
            }
        
       return true; 
    }
};