// Last updated: 4/13/2026, 3:37:52 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    node->val=node->next->val;
    node->next=node->next->next;
}