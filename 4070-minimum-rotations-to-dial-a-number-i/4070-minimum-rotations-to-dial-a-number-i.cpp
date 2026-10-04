class Solution {
public:
    int minRotations(string s) {
        int curr = 0;
        int sum = 0;

        for(char c : s){
            int target = c - '0';

            int clockwise = (target - curr + 10) % 10;
            int antiClockwise = (curr - target + 10) % 10;

            sum += min(clockwise, antiClockwise);

            curr = target;
        }
        return sum;
    }
};