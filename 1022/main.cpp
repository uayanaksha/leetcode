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
    int fn(TreeNode* root, int idx){
        if(!root) return 0;
        int v  = 2*idx + root->val;
        if(!root->left && !root->right){
            return v;
        }
        return fn(root->left, v) + fn(root->right, v);
    }
    int sumRootToLeaf(TreeNode* root) {
        long long sum = fn(root, 0);
        return sum;
    }
};
