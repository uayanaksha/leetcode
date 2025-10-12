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
    TreeNode* helper(vector<int>& nums, int l, int r){
      if (l>r) {
        return nullptr;
      }
      int mid = l + (r-l)/2;
      TreeNode* tr = new TreeNode(nums[mid]);
      tr->left = helper(nums, l, mid-1);
      tr->right = helper(nums, mid+1, r);
      return tr;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
      TreeNode* tr = helper(nums, 0, nums.size()-1);
      return tr;
    }
};
