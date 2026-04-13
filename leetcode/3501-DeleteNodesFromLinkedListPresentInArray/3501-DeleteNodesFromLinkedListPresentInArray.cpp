// Last updated: 4/13/2026, 3:31:47 PM
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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int, bool> m;
        for (auto c: nums) {
           m[c]=true;
        }
        ListNode* ptr=head;
        ListNode* ptr1;
        while (ptr != NULL) {
            if (m[ptr->val]==true) {
                if (ptr == head) {
                    head = head->next;
                    ptr = head;
                } else {
                    ptr1->next = ptr->next;
                    ptr = ptr1->next;
                }
            }
            else{
                ptr1=ptr;
                ptr=ptr->next;
            }
        }
        return head;
    }
};