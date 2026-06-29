
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
    int getLength(ListNode* head){
        if(!head) return 0;
        return 1 + getLength(head->next);
    }

    ListNode* fn(ListNode* head, ListNode* next){
        if(!head) {
            return next;
        }
        head->next = fn(head->next, next);
        return head;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;
        int n = getLength(head);
        k = k % n;
        if(k == 0) return head;
        ListNode *ptr = head;
        for(int i=1; i+k<n; ++i){
            ptr = ptr->next;
        }
        ListNode* next = ptr->next;
        ptr->next = nullptr;
        ListNode* res = fn(next, head);
        return res;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };

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
*/
