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
    int fn(TreeNode* root){
        if(!root) return 0;
        int l = 1 + fn(root->left);
        int r = 1 + fn(root->right);
        return max(l, r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int v = fn(root->left) + fn(root->right);
        int rec = max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right));
        return max(v, rec);
    }
};
