class Solution {
public:
    int minAddToMakeValid(string s) {
        int openCount = 0, minAddsNeed = 0;

        for(char c : s){
            if(c == '('){
                openCount++;
            }
            else{
                if(openCount > 0){
                    openCount--;
                }
                else{
                    minAddsNeed++;
                }
            }
        }
        return minAddsNeed + openCount;
    }
};