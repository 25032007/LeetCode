class Solution {
public:
    string removeDuplicates(string s, int k) {
        bool removed = true;

        while(removed){
            removed = false;
            int count = 1;

            for(int i=1; i<s.size(); i++){
                if(s[i] == s[i-1]) count++;

                else count = 1;

                if(count == k){
                    s.erase(i - k + 1, k);
                    removed = true;
                    break;
                }
            }
        }
        return s;
    }
};