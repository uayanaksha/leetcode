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
    int fn(TreeNode* root, int &v, int& min_diff){
        if(root->left){
            fn(root->left, v, min_diff);
        }
        if(v >= 0)
        min_diff = min(min_diff, root->val - v);
        v = root->val;
        if(root->right){
            fn(root->right, v, min_diff);
        }
        return min_diff;
    }

    int getMinimumDifference(TreeNode* root) {
        int min_diff = 1e5, v = -1;
        int r = fn(root, v, min_diff);
        return r;
    }
};
