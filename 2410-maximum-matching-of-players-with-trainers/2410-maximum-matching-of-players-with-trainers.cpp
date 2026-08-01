class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
         sort(begin(players), end(players));
        sort(begin(trainers), end(trainers));
        
        int m = players.size();
        int n = trainers.size();
        
        int i = 0;
        int j = 0;
        
        while(i < m && j < n) {
            if(players[i] <= trainers[j]) {
                i++;
            }
            j++;
        }
        
        return i;
        
    }
};