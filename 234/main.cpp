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
    ListNode* getReversedList(ListNode* head){
      if(!head || !head->next) return head;
      ListNode* reversedList = getReversedList(head->next);
      head->next->next = head;
      head->next = nullptr;
      return reversedList;
    }
    bool isPalindrome(ListNode* head) {
      ListNode *slow = head, *fast = head;
      while(fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
      }
      ListNode* revHead = getReversedList(slow->next);
      while(revHead){
        if(head->val != revHead->val){
          return false;
        }
        head = head->next;
        revHead = revHead->next;
      }
      return true;
    }
};
