// Last updated: 4/13/2026, 3:32:36 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reform(struct ListNode* head){
    if(head->next->next==NULL){
        int num=(head->next->val);
        head->next->val=num%10;
        num=num/10;
        head->val=(head->val)+num;
    }
    else{
        head->next=reform(head->next);
        int num=(head->next->val);
        int j=num%10;
        head->next->val=j;
        num=num/10;
        head->val=(head->val)+num;
    }
    return head;
}
struct ListNode* doubleIt(struct ListNode* head){
    struct ListNode* ptr= head;
    while(ptr!=NULL){
        ptr->val=2*(ptr->val);
        ptr=ptr->next;
    }
    if(head->next!=NULL)
      head=reform(head);
    if((head->val)>=10){
        int num=head->val;
        int j=num%10;
        head->val=j;
        num=num/10;
        struct ListNode* new=(struct ListNode*)malloc(sizeof(struct ListNode));
        new->val=num;
        new->next=head;
        head=new;  
    }
    return head; 
}