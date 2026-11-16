class Solution {
public:
    string digitSum(string s, int k) {
        int n = s.size();

        while(s.size() > k){
            string temp = "";

            for(int i=0; i<s.size(); i += k){
                string group = s.substr(i, k);
                int sum = 0;
                for(char c : group){
                    sum += (c - '0');
                }
                temp += to_string(sum);
            }
            s = temp;
        }
        return s;
    }
};