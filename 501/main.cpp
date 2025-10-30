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
    void helper(TreeNode* root, vector<int>& v){
        if(!root) return;
        helper(root->left, v);
        v.push_back(root->val);
        helper(root->right, v);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> v, r;
        int maxctr=0;
        helper(root, v);
        for(int i{}; i<v.size(); ++i){
            int ctr = 1;
            while(i+1<v.size() && v[i] == v[i+1]){
                ++ctr;
                ++i;
            }
            if(ctr < maxctr) continue;
            if(ctr > maxctr){
                maxctr = ctr;
                r.clear();
            }
            r.push_back(v[i]);
        }
        return r;
    }
};
