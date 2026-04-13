// Last updated: 4/13/2026, 3:37:19 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    if(head==NULL||head->next==NULL||head->next->next==NULL)
       return head;
    struct ListNode* ptr, * ptr1, *ptr2;
    ptr=ptr2=head;
    ptr1=ptr->next;
    while(ptr->next!=NULL&&ptr2->next!=NULL){
       ptr2=ptr->next;
       ptr->next=ptr2->next;
       ptr=ptr->next;
       ptr2->next=ptr->next;
       ptr2=ptr2->next;
    }
    ptr->next=ptr1;
    return head;
}