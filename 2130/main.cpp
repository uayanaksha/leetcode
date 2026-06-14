/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    ListNode* global = nullptr;
public:
    int rec(ListNode* curr){
        if(!curr || !global) return 0;
        int value = rec(curr->next);
        int maxim = max(value, global->val + curr->val);
        global = global->next;
        return maxim;
    }
    int pairSum(ListNode* head) {
        global = head;
        return rec(head);
    }
};
