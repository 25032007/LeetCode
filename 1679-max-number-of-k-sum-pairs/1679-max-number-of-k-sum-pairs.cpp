class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int count = 0;

        for(int x : nums){
            int complement = k - x;

            if(mp[complement] > 0){
                count++;
                mp[complement]--;
            }
            else{
                mp[x]++;
            }
        }
        return count;
    }
};