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
    ListNode* helper(ListNode* head, int n){
        if(!head) return head;
        if(n == 0) return head->next;
        head->next = helper(head->next, n-1);
        return head;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ptr = head;
        int ctr{};
        while(ptr){ ptr = ptr->next; ++ctr;}
        return helper(head, ctr-n);
    }
};
