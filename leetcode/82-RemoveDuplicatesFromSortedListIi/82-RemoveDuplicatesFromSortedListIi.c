// Last updated: 4/13/2026, 3:39:56 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head==NULL||head->next==NULL)
       return head;
    int pre=-101;
    while(head->val==head->next->val||head->val==pre){
        pre=head->val;
        head=head->next;
        if(head->next==NULL&&head->val==pre){
          return NULL;}
        else if(head->next==NULL)
           break;
    }
    struct ListNode* ptr=head;
    struct ListNode* ptr1=ptr;
    while(ptr!=NULL&&ptr->next!=NULL){
        if(ptr->val==ptr->next->val||ptr->val==pre){
           pre=ptr->val;
           ptr1->next=ptr->next;
           ptr=ptr->next;
        if(ptr->next==NULL&&ptr->val==pre){
          ptr1->next=ptr->next;}
       }
       else{
           ptr1=ptr;
           ptr=ptr->next;
       }
    }
    return head;
}