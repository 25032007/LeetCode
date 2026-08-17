class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, bool> mp;
        vector<int> res;

        for(int num : nums1){
            mp[num] = true;
        }

        for(int num :  nums2){
            if(mp[num]){
                res.push_back(num);
                mp[num] = false;
            }
        }
        return res;
    }
};