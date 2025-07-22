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
    ListNode* rev(ListNode* l){
        if(l == NULL || l->next == NULL) return l;
        ListNode* newList = rev(l->next);
        ListNode* front = l->next;
        front->next = l;
        l->next = NULL;
        return newList;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l = NULL, *ptr1 = l1, *ptr2 = l2;
        int carry = 0, digit = 0;
        while(ptr1 && ptr2){
            digit = (carry + ptr1->val + ptr2->val) % 10;
            carry = (carry + ptr1->val + ptr2->val) / 10;
            l = new ListNode(digit, l);
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        while(ptr1){
            digit = (carry + ptr1->val) % 10;
            carry = (carry + ptr1->val) / 10;
            l = new ListNode(digit, l);
            ptr1 = ptr1->next;
        }
        while(ptr2){
            digit = (carry + ptr2->val) % 10;
            carry = (carry + ptr2->val) / 10;
            l = new ListNode(digit, l);
            ptr2 = ptr2->next;
        }
        if(carry){
            l = new ListNode(carry, l);
        }
        l = rev(l);
        return l;
    }
};
