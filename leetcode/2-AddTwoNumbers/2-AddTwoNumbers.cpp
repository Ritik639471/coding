// Last updated: 4/13/2026, 3:41:57 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int x=0,y=0,z=0;
        ListNode* l=NULL,*ptr,*ptr1;
       while(l1!=NULL || l2!=NULL || x!=0){
           x+=(l1!=NULL?l1->val:0);
           x+=(l2!=NULL?l2->val:0);
           if(l1==NULL) ptr1=new ListNode(x%10);
           else{ptr1=l1;ptr1->val=x%10;}
           if(l==NULL) l=ptr1;
           else ptr->next=ptr1;
           ptr=ptr1;
           x/=10;
           if(l1!=NULL) l1=l1->next;
           if(l2!=NULL) l2=l2->next;
       }
       return l;
    }
};