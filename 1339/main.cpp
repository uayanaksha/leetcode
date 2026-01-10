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
    using ll = long long;
    ll MOD = 1e9+7;
    ll TOTAL = 0, RES = 0;
    ll dfs(TreeNode* root){
        if(!root) return 0LL;
        const ll v = root->val + dfs(root->left) + dfs(root->right);
        RES = max(RES, v * (TOTAL - v));
        return v;
    }
    int maxProduct(TreeNode* root) {
        TOTAL = dfs(root), dfs(root);
        return RES % static_cast<int>(MOD);
    }
};
