// Last updated: 4/13/2026, 3:38:52 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        while(head){
            if(head->val == INT_MIN)     return true;
            head->val = INT_MIN;
            head = head->next;
        }
        return false;
    }
};