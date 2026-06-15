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
    ListNode* deleteMiddle(ListNode* head) {
       ListNode *slow = head, *fast = head;
       while(fast && fast->next){
        fast = fast->next;
        if(fast->next){
            fast = fast->next;
        }
        if(fast->next){
            slow = slow->next;
        }
       }
       if(slow){
        if(slow->next){
            slow->next = !!slow->next->next ? slow->next->next : 0x0;
        } else {
            head = 0x0;
        }
       }
       return head;
    }
};
