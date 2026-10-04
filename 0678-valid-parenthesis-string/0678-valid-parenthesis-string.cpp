class Solution {
public:
    bool checkValidString(string s) {
        int cmin = 0;//minimum possible number of "(" bracket
        int cmax = 0;//maximum possible number of ")" bracket

        for(char c : s){
            if(c == '('){
                cmin++;
                cmax++;
            }
            else if(c == ')'){
                cmin = max(0, cmin - 1);
                cmax--;
            }
            else{
                cmin = max(0, cmin - 1);
                cmax++;
            }

            if(cmax < 0) return false;//you have too much closing brackets
        }
        return cmin == 0;//minimum unmatches "(" must be 0
    }
};