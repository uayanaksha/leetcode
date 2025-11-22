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
    int helper(TreeNode* root, int val){
        if(!root) return 0;
        if(!root->left && !root->right) return 10*val + root->val;
        int lsum = helper(root->left, 10*val + root->val);
        int rsum = helper(root->right, 10*val + root->val);
        return lsum + rsum;
    }
    int sumNumbers(TreeNode* root) {
        return helper(root, 0);
    }
};
