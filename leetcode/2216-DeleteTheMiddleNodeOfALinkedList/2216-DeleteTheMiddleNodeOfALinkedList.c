// Last updated: 4/13/2026, 3:33:13 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    struct ListNode*ptr1= head;
    if(head==NULL||head->next==NULL)
       return NULL;
    int i=0;
    while(ptr1!=NULL){
        i++;
        ptr1=ptr1->next;
    }
    i=i/2-1;
    ptr1=head;
    while(i>0){
        ptr1=ptr1->next;
        i--;
    }
    ptr1->next=ptr1->next->next;
   return head; 
}