// Last updated: 4/13/2026, 3:40:31 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(head==NULL||head->next==NULL)
        return head;
    struct ListNode* ptr=head;
    int n=0;
    while(ptr!=NULL){
        ptr=ptr->next;
        n++;
    }
    k=k%n;
    ptr=head;
    int i=0;
    struct ListNode* ptr1=head;
    if(k==0)
      return head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
        ++i;
        if(i==n-k-1)
          ptr1=ptr;
    }
    ptr->next=head;
    head=ptr1->next;
    ptr1->next=NULL;
    return head;
}