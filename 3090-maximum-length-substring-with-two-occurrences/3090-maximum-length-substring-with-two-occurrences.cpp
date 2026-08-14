class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        int maxi = 0;
        int i=0, j=0;

        while(j < n){
            mp[s[j]]++;

            while(mp[s[j]] > 2){
                mp[s[i]]--;
                i++;
            }
            maxi = max(maxi, (j - i + 1));
            j++;
        }
        return maxi;
    }
};