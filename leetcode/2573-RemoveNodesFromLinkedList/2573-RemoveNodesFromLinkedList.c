// Last updated: 4/13/2026, 3:32:46 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNodes(struct ListNode* head) {
    if(head->next->next!=NULL)
        head->next=removeNodes(head->next);
    if(head->val<head->next->val){
            head->val=head->next->val;
            head->next=head->next->next;
    }
    return head;
}