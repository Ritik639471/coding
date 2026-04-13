// Last updated: 4/13/2026, 3:38:54 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* traverse(int n,struct ListNode* ptr1,struct ListNode** prev){
    for(int i=0;i<n;i++){
       *prev=ptr1;
       ptr1=ptr1->next;}
    return ptr1;
}
void reorderList(struct ListNode* head) {
    struct ListNode* ptr1=head;
    int n=0;
    while(ptr1!=NULL){
        n++;
        ptr1=ptr1->next;
    }
    int i=0;
    ptr1=head;
    while(i!=n/2){
        struct ListNode* prev;
        struct ListNode* ptr2=traverse(n-2*i-1,ptr1,&prev);
        if(prev!=ptr1){
        ptr2->next=ptr1->next;
        ptr1->next=ptr2; 
        i++;
        ptr1=ptr2->next;
        prev->next=NULL;}
        else
          return;
    }
}