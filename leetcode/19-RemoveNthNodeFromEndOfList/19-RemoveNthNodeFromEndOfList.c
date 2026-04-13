// Last updated: 4/13/2026, 3:41:32 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* ptr=head;
    int k=0;
    while(ptr!=NULL){
        k++;
        ptr=ptr->next;
    }
    ptr=head;   
    if(n==k)
        return head->next;
    int i=1;
    while(ptr->next!=NULL && i<k-n){
        ptr=ptr->next;
        i++;
    }
    struct ListNode* ptr1=ptr->next;
    ptr->next=ptr->next->next;
    free(ptr1);
    return head;
}