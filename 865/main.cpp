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
    int maxDepth = 0;
    using pti = pair<TreeNode*, int>;
    pti fn(TreeNode* tr){
        if(!tr) return pti{nullptr, 0};
        const auto &[lptr, lv] = fn(tr->left);
        const auto &[rptr, rv] = fn(tr->right);
        return {
            lv == rv ? tr : lv > rv ? lptr : rptr,
            max(lv, rv) + 1
        };
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        const auto &[ptr, v] = fn(root);
        return ptr;
    }
};
