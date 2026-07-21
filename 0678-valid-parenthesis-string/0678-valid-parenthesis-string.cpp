class Solution {
public:
    bool checkValidString(string s) {
        int mini = 0, maxi = 0;

        int n = s.size();

        for(int i=0; i<n; i++){
            if(s[i] == '('){
                maxi++;
                mini++;
            }
            else if(s[i] == ')'){
                mini--;
                maxi--;
                if(maxi < 0) return 0;
                if(mini < 0) mini = 0;;
            }
            else{
                mini--;
                if(mini < 0) mini = 0;
                maxi++;
            }
        }
        return mini == 0;
    }
};