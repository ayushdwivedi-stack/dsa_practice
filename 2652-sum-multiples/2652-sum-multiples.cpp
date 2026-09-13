class Solution {
public:
    int sumOfMultiples(int n) {
        int count =3;
        int sum =0;
        while(count <= n){
            if(count % 3 == 0){
                sum += count;
            }else if(count % 5 == 0){
                sum += count;
            }else if(count % 7 == 0){
                sum += count;
            }
            count++;
        }
        return sum;
        
    }
};