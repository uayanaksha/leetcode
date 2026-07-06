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

    int minDiffInBST(TreeNode* root) {
        vector<int> v;
        getAll(root, v);
        int diff = ~(1<<31);
        for(int i=1; i<v.size(); ++i){
            diff = min(diff, v[i] - v[i-1]);
        }
        return diff;
    }
};
