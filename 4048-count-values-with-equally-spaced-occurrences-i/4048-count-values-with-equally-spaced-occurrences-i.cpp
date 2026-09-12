class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        int n = nums.size();

        for(int i=0; i<n; i++){
            mp[nums[i]].push_back(i);
        }

        int count = 0;

        for(auto& [num, idx] : mp){
            if(idx.size() == 3){
                if(idx[1] - idx[0] == idx[2] - idx[1]){
                    count++;
                }
            }
        }
        return count;
    }
};