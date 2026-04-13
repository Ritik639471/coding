// Last updated: 4/13/2026, 3:32:40 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int findgcd(int a, int b)
{
if (b==0)
return a;
return findgcd (b,a%b);
}
struct ListNode* insertGreatestCommonDivisors(struct ListNode* head){
  struct ListNode*ptr1=head,*ptr2=head->next;
  int a ,b;
  while(ptr2!=NULL){
      a=ptr1->val;
      b=ptr2->val;
      struct ListNode* new=(struct ListNode*)malloc(sizeof(struct ListNode));
      new->val=findgcd(a,b);
      new->next=ptr2;
      ptr1->next=new;
      ptr1=ptr2;
      ptr2=ptr2->next;
  }
  return head;
}