class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        int n = paragraph.size();
        unordered_map<string, int> mp;

        for(string word : banned){
            mp[word] = -1;
        }        

        for(char &c: paragraph){
            if(isalpha(c)){
                c = tolower(c);
            }
            else{
                c = ' ';
            }
        }

        stringstream ss(paragraph);
        string word = "";
        string res = "";
        int count = 0;

        while(ss >> word){
            if(mp[word] != -1){
                mp[word]++;

                if(mp[word] > count){
                    count = mp[word];
                    res = word;
                }
            }
        }
        return res;
    }
};