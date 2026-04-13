// Last updated: 4/13/2026, 3:38:57 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    while(head){
            if(head->val == INT_MIN)     return true;
            head->val = INT_MIN;
            head = head->next;
        }
        return false;
}