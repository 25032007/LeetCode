/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root, vector<int>& arr){
        if(!root) return;

        arr.push_back(root->val);
        solve(root->left, arr);
        solve(root->right, arr);
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;

        vector<int> arr;
        solve(root, arr);
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i] >= low && arr[i] <= high){
                sum += arr[i];
            }
        }
        return sum;
    }
};