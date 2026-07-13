class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int startHH = stoi(startTime.substr(0, 2)); //substr(strating index, length)
        int startMM = stoi(startTime.substr(3, 2));
        int startSS = stoi(startTime.substr(6, 2));

        int SS1 = (startHH *3600) + (startMM*60) + startSS;

        int endHH = stoi(endTime.substr(0,2));
        int endMM = stoi(endTime.substr(3,2));
        int endSS = stoi(endTime.substr(6,2));

        int SS2 = (endHH*3600) + (endMM*60) + endSS;

        return SS2 - SS1;
    }
};