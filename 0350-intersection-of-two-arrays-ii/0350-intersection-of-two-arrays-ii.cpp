class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> res;

        if(n1 < n2){
            for(int num : nums1){
                mp[num]++;
            }

            for(int num : nums2){
                if(mp[num] && mp[num] > 0){
                    mp[num]--;
                    res.push_back(num);
                }
            }
        }
        else{
            for(int num : nums2){
                mp[num]++;
            }
            for(int num : nums1){
                if(mp[num] && mp[num] > 0){
                    mp[num]--;
                    res.push_back(num);
                }
            }
        }

        return res;
    }
};