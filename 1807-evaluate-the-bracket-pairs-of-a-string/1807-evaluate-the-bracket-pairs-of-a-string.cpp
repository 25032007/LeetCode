class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;

        for(const auto& pair: knowledge){
            mp[pair[0]] = pair[1];
        }

        string result = "";
        int n = s.size();
        int i = 0;

        while(i < n){
            if(s[i] == '('){
                string key = "";
                i++;

                while(i < n && s[i] != ')'){
                    key += s[i];
                    i++;
                }
                i++;

                if(mp.find(key) != mp.end()){
                    result += mp[key];
                }
                else{
                    result += '?';
                }
            }
            else{
                result += s[i];
                i++;
            }
        }
        return result;
    }
};