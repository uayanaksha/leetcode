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
    void getAll(TreeNode* root, vector<int>& v){
        if(!root) return;
        getAll(root->left, v);
        v.push_back(root->val);
        getAll(root->right, v);
    }
    bool findTarget(TreeNode* root, int k) {
        if(!root || (!root->left && !root->right)) 
            return false;
        vector<int> v;
        getAll(root, v);
        bool flag = false;
        for(int i{}; i<v.size() && !flag; ++i){
            flag = find(v.begin(), v.end(), k - v[i]) != v.end() && k != v[i] * 2;
        }
        return flag;
    }
};
