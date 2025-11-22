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
    bool find_val(vector<int>& nums, int target){
        int l{}, r=nums.size()-1, m;
        while(l<=r){
            m=l+(r-l)/2;
            if(target < nums[m]){
                r = m-1;
            } else if(target > nums[m]){
                l = m+1;
            } else {
                return true;
            }
        }
        return false;
    }
    ListNode* helper(vector<int>& nums, ListNode* head){
        if(!head) return head;
        bool signal = find_val(nums, head->val);
        if(signal) head = modifiedList(nums, head->next);
        else head->next = modifiedList(nums, head->next);
        return head;

    }
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(nums.size() <= 10e3) sort(nums.begin(), nums.end());
        ListNode* ptr = helper(nums, head);
        return ptr;
    }
};
