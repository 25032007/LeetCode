class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<vector<int>> ans(2);
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;

        for(int i=0; i<n; i++){
            mp1[nums1[i]]++;
            // mp2[nums2[i]]++;
        }
        for(int i=0; i<m; i++){
            mp2[nums2[i]]++;
        }
        

        for(auto& pair : mp1){
            if(mp2.find(pair.first) == mp2.end()){
                ans[0].push_back(pair.first);
            }
        }

        for(auto& pair : mp2){
            if(mp1.find(pair.first) == mp2.end()){
                ans[1].push_back(pair.first);
            }
        }
        return ans;
    }
};