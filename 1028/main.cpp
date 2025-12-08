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
    TreeNode* recoverFromPreorder(string traversal) {
        vector<TreeNode*> st;
        for(int i{}, lvl, e; i<traversal.size(); ){
            for(lvl = 0; i<traversal.size() && traversal[i] == '-'; ++i) ++lvl;
            for(e = 0; i<traversal.size() && traversal[i] != '-'; ++i) e = 10*e + traversal[i] - '0';
            TreeNode* T = new TreeNode(e);
            while(st.size() > lvl) st.pop_back();
            if(!st.empty()){
                if(!st.back()->left) st.back()->left = T;
                else st.back()->right = T;
            }
            st.push_back(T);
        }
        return st.front();
    }
};
