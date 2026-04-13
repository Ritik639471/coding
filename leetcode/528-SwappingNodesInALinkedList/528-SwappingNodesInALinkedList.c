// Last updated: 4/13/2026, 3:36:36 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int traverse(struct ListNode* temp){
    int n=0;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    return n;
}
struct ListNode* swapNodes(struct ListNode* head, int k) {
    struct ListNode* ptr1=head;
    int i=k;
    while(k>1){
        ptr1=ptr1->next;
        k=k-1;
    }
    struct ListNode* ptr2=head;
    k=(traverse(head))-i+1;
    while(k>1){
        ptr2=ptr2->next;
        k--;
    }
    k=ptr1->val;
    ptr1->val=ptr2->val;
    ptr2->val=k;
    return head;
}