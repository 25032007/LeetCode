class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.size();
        if(n < k) return 0;
        int count = 0;

        for(int i=0; i<n; i++){
            unordered_map<char, int> mp;

            for(int j=i; j<n; j++){
                mp[s[j]]++;

                bool isValid = true;
                for(auto& pair : mp){
                    if(pair.second < k){
                        isValid = false;
                        break;
                    }
                }

                if(isValid){
                    count = max(count, j-i+1);
                }
            }
        }
        return count;
    }
};