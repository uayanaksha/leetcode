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
    void inorder(TreeNode* root, vector<int>& nodes){
        if(!root) return;
        inorder(root->left, nodes);
        nodes.push_back(root->val);
        inorder(root->right, nodes);
    }
    TreeNode* generateBalancedTree(vector<int>& nodes, int start, int end){
        if(start > end) return nullptr;
        int mid = start + (end - start)/2;
        return new TreeNode(nodes[mid], 
        generateBalancedTree(nodes, start, mid -1), 
        generateBalancedTree(nodes, mid+1, end));
    }
    TreeNode* balanceBST(TreeNode* root) {
          vector<int> nodes;
          inorder(root, nodes);
          root = generateBalancedTree(nodes, 0, nodes.size()-1);
          return root;
    }
};
