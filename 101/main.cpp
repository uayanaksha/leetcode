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
    bool helper(TreeNode* l, TreeNode* r){
      if(!l && !r) return true;
      if(l && !r) return false;
      if(!l && r) return false;
      bool signal = l->val == r->val;
      return signal && helper(l->left, r->right) && helper(r->left, l->right);

    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        int sig = helper(root->left, root->right);
        return sig;
    }
};
