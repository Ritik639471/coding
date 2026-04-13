// Last updated: 4/13/2026, 3:41:15 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if(head==NULL||head->next==NULL)
        return head;
    struct ListNode* prev=NULL;
    struct ListNode* ptr=head;
    struct ListNode* ptr1=head;
    head=head->next;
    while(ptr!=NULL&&ptr->next!=NULL){
        ptr1=ptr->next;
        ptr->next=ptr1->next;
        ptr1->next=ptr;
        if(prev!=NULL)
           prev->next=ptr1;
        prev=ptr;
        ptr=ptr->next;
    }
    return head;
}