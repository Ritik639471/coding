// Last updated: 4/13/2026, 3:33:37 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2){
    struct ListNode* ptr1=list1,*ptr2;
    b=b-a;
    while(a-1){
        ptr1=ptr1->next;
        a--;
    }
    ptr2=ptr1->next;
    while(b){
        ptr2=ptr2->next;
        b--;
    }
    ptr1->next=list2;
    while(list2->next!=NULL)
       list2=list2->next;
    list2->next=ptr2->next;
    return list1;
}