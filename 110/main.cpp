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
    int maxDepth(TreeNode *tr){
      if(!tr) return 0;
      int l = 1+maxDepth(tr->left);
      int r = 1+maxDepth(tr->right);
      return max(l, r);
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int l = maxDepth(root->left);
        int r = maxDepth(root->right);
        bool signal = abs(l - r) < 2;
        return signal && isBalanced(root->left) && isBalanced(root->right);
    }
};
