class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int sum = 0;
        int current = 0;

        for (int floor : requests) {
            sum += abs(floor - current);
            current = floor;
        }

        return sum;
    }
};