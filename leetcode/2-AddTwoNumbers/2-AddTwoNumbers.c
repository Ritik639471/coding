// Last updated: 4/13/2026, 3:42:00 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry=0,value=0;
    struct ListNode* sum=NULL,*temp;
    while(l1!=NULL || l2!=NULL || carry!=0){
       struct ListNode* node=(struct ListNode*)malloc(sizeof(struct ListNode));
       int x=l1?l1->val:0;
       int y=l2?l2->val:0;
       value=x+y+carry;
       node->val=value%10;
       carry=value/10;
       if(sum==NULL){
           sum=node;
           temp=sum;}
       else{
           temp->next=node;
           temp=temp->next;}
       if(l1)
          l1=l1->next;
       if(l2)
         l2 =l2->next;
    }
    temp->next=NULL;
    return sum;
}