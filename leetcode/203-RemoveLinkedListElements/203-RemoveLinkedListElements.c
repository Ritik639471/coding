// Last updated: 4/13/2026, 3:38:16 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* ptr=head,*prev;
    while(ptr!=NULL){
        if(ptr->val==val){
            if(ptr==head){
                head=head->next;
                ptr=head;
                prev=head;
            }
            else if (ptr->next==NULL){
              prev->next=ptr->next;
              return head;  
            }
            else{
                ptr->val=ptr->next->val;
                ptr->next=ptr->next->next;
            }
        }
        else {prev=ptr;ptr=ptr->next;}
    }
    return head;
}