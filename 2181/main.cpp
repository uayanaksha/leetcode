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
public:
    ListNode* mergeNodes(ListNode* head) {
        if(!head) return nullptr;
        if(head->val == 0) return mergeNodes(head->next);
        int sum = {};
        while(head && head->val != 0){
            sum += head->val;
            head = head->next;
        }
        ListNode* ptr = new ListNode(sum, mergeNodes(head));
        return ptr;
    }
};
