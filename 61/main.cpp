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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;
        int len = 0;
        {
            ListNode* ptr = head;
            while(ptr) {
                ptr = ptr->next;
                ++len;
            }
        }
        k = k%len;
        while(k--){
            ListNode* ptr = head;
            while(ptr && ptr->next && ptr->next->next){
                ptr = ptr->next;
            }
            ptr->next->next = head;
            head = ptr->next;
            ptr->next = nullptr;
        }
        return head;
    }
};
