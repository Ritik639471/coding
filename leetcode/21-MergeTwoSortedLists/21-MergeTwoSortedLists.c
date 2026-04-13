// Last updated: 4/13/2026, 3:41:30 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* insertnode(int key){
    struct ListNode* node=(struct ListNode*)malloc(sizeof(struct ListNode));
    node->val=key;
    node->next=NULL;
    return node;
}
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(list1==NULL)
       return list2;
    if(list2==NULL)
       return list1;
    struct ListNode* ptr=list1;
    struct ListNode* ptr2=list1;
    if((ptr->val)<=(list2->val)){
            ptr=ptr->next;
        }
    else{
        struct ListNode* node=insertnode(list2->val);
        node->next=list1;
        list1=node;
        list2=list2->next;
    }
    ptr=list1;
    ptr2=list1->next;
    while(ptr2!=NULL&&list2!=NULL){
        if(ptr2->val<=list2->val){
            ptr=ptr2;
            ptr2=ptr2->next;
        }
        else{
          struct ListNode* node=insertnode(list2->val);
          node->next=ptr2;
          ptr->next=node;
          ptr=node;
          list2=list2->next;
        }
    }
    if(list2!=NULL){
        ptr->next=list2;
    }
    return list1;
}