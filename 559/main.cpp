/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(!root) return 0;
        int maxim = 0;
        for(const auto& c: root->children){
            int depth = maxDepth(c);
            maxim = max(maxim, depth);
        }
        return 1 + maxim;
    }
};
