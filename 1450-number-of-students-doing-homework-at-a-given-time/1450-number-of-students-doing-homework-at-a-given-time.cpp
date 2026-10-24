class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int count =0; 
        int i =0;
        int j =0;

       while(i < startTime.size() && j < endTime.size())
        {
            if((endTime[j] >= queryTime) && (startTime[i] <=queryTime)) 
            {
                count++;
            }
            i++;
            j++;
             
        }
        return count; 
    }
};