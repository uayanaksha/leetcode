/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* root, vector<string>& mem, string s) {
      if(!root) return;
      string a = to_string(root->val);
      if(!root->left && !root->right){
        s += a;
        mem.push_back(s);
        return;
      }
      helper(root->left, mem, s+a+"->");
      helper(root->right, mem, s+a+"->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
      vector<string> v;
      helper(root, v, "");
      return v;
    }
};
