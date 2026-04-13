// Last updated: 4/13/2026, 3:35:15 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* ptr=head,*ptr1=head;;
    while(ptr1!=NULL&&ptr1->next!=NULL){
        ptr=ptr->next;
        ptr1=ptr1->next->next;
    }
    return ptr;
}