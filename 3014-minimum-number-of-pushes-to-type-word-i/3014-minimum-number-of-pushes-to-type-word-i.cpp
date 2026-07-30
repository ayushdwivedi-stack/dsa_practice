class Solution {
public:
    int minimumPushes(string word) {
        
        int sum =0;
        for(int i = 0 ; i <word.length() ; i++)

        {
            int click = word.length() % 8 ;
            if(word.length() <=8)
            {
               sum = word.length();

            }
            else if(  word.length() >8 && word.length() <=16)
            {
                sum =  8 + 2 * (word.length() -8);
            }

            else if(word.length() >16 && word.length()<= 24)
            {
                sum = 24+ 3*(word.length() - 16);
            }
            else
            {
                sum = 48 + 4*(word.length() -24);
            }
                
            


        }
        return sum ;

        
    }
};