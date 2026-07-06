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
    void _inorder(TreeNode* root, vector<int>& v){
        if(!root) return;
        _inorder(root->left, v);
        v.push_back(root->val);
        _inorder(root->right, v);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> v;
        _inorder(root, v);
        TreeNode* newRoot = nullptr;
        for(int i=v.size()-1; i >= 0; --i){
            newRoot = new TreeNode(v[i], nullptr, newRoot);
        }
        return newRoot;
    }
};
