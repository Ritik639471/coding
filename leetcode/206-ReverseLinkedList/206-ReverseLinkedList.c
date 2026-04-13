// Last updated: 4/13/2026, 3:38:17 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *pre=NULL,*current=head,*nex=head;
    while(current!=NULL){
        nex=nex->next;
        current->next=pre;
        pre=current;
        current=nex;
    }
    head=pre;
    return head;
}