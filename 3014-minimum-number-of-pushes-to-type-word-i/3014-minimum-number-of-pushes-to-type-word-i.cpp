class Solution {
public:
    int minimumPushes(string word) {
        int totalclick = 0;

        for(int i = 0; i < word.length(); i++){
            int click = (i / 8) + 1;

            totalclick += click;
        }
        return totalclick;
    }
};