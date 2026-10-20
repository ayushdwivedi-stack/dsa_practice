class Solution {
public:
    int maxPower(string s) {
      int n=s.size();
      if(n==1 || n==0)
      return n;
      int count=1;
      int max=0;
      for(int i=1;i<n;i++){
        if(s[i]==s[i-1] ){
        count++;
       }
       else {
       count=1;

       }
       if(max<count){
        max=count;
       }
       }
       return max;
    }
};