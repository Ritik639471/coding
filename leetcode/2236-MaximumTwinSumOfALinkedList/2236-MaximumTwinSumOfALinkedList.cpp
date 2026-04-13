// Last updated: 4/13/2026, 3:33:12 PM
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
    int pairSum(ListNode* head) {
       ListNode* temp=head,*temp1=head->next;
       while(temp1!=NULL){
         if(temp1->next==NULL){
            break;
         }
          temp=temp->next;
          temp1=temp1->next->next;
       }
       ListNode* prev=temp,*next1;
       temp=temp->next;
       prev->next=NULL;
       prev=temp;
       temp=temp->next;
       prev->next=NULL;
       while(temp!=NULL){
          next1=temp->next;
          temp->next=prev;
          prev=temp;
          temp=next1;
       }
       int max1=0;
       while(head!=NULL){
        int sum=head->val+prev->val;
         max1=max(max1,sum);
         head=head->next;
         prev=prev->next;
       }
       return max1;
    }
};