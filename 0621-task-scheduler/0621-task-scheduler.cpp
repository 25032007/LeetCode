class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> mp;
        int max_freq = 0;

        for(char x : tasks){
            mp[x]++;
            max_freq = max(max_freq, mp[x]);
        }

        int count = 0;
        for(auto& [task, total] : mp){
            if(total == max_freq){
                count++;
            }
        }

        int ans = (max_freq - 1) * (n + 1) + count;

        return max((int)tasks.size(), ans);
    }
};