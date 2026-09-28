class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        map<int, int> mp;

        for(int i : nums){
            mp[i]++;
        }

        while(!mp.empty()){
            vector<int> remove;

            for(auto& c : mp){
                ans.push_back(c.first);
                c.second--;

                if(c.second == 0){
                    remove.push_back(c.first);
                }
            }

            for(int i : remove){
                mp.erase(i);
            }
        }
        return ans;
    }
};