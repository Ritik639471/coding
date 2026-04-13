// Last updated: 4/13/2026, 3:33:09 PM
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
    ListNode* mergeNodes(ListNode* head) {
        if(head==NULL||head->next==NULL) return NULL;
        ListNode* ptr=head->next,*ptr1=head;
        int sum=0;
        while(ptr!=NULL){
            if(ptr->val!=0){
                sum+=ptr->val;
                ptr=ptr->next;
                continue;
            }
            else{
                ptr1->val=sum;
                ptr=ptr->next;
                if(ptr==NULL)ptr1->next=NULL;
                ptr1=ptr1->next;
                sum=0;
            }
        }
        return head;
    }
};