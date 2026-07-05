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
    void bfs(TreeNode* root, vector<double>& res){
        deque<TreeNode*> v({root});
        while(!v.empty()){
            double d = static_cast<double>(v.size());
            double sum = 0;
            for(int i{}; i<d; ++i){
                TreeNode* t = v.back();
                sum += t->val;
                if(t->left) v.push_front(t->left);
                if(t->right) v.push_front(t->right);
                v.pop_back();
            }
            res.push_back(sum / d);
        }
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> v;
        bfs(root, v);
        return v;
    }
};
