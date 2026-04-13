// Last updated: 4/13/2026, 3:38:40 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *ptr1=headA ,*ptr2=headB;
    while(ptr1 && ptr2 && ptr1!=ptr2){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        if(ptr1==ptr2)
           return ptr1;
        if(ptr1==NULL)
          ptr1=headB;
        if(ptr2==NULL)
          ptr2=headA;
    }
    return ptr1;
}