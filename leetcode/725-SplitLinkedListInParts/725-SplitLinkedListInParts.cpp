// Last updated: 4/13/2026, 3:35:53 PM
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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k);
        ListNode* temp=head,*temp1;
        int n=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        vector<int> siz(k,n/k);
        for(int i=0;i<n%k;i++) siz[i]++;
        int i=0;
        temp=head;
        while(temp!=NULL){
            ans[i]=temp;
            for(int j=0;j<siz[i];j++){
               if (temp!=NULL) {temp1=temp;temp=temp->next;}
            }
            temp1->next=NULL;
            i++;
        }
        return ans;
    }
};