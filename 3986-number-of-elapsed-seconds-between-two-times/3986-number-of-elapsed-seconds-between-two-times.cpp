class Solution {
    int time(string& s){
        int h = (s[0]-'0')*10 + (s[1]-'0');
        int m = (s[3]-'0')*10 + (s[4]-'0');
        int ss = (s[6]-'0')*10 + (s[7]-'0');

        return (h*3600) + (m*60) + ss;
    }
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        return time(endTime) - time(startTime);
    }
};