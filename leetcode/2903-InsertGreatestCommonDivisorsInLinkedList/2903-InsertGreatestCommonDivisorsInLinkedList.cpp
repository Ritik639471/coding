// Last updated: 4/13/2026, 3:32:34 PM
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
    int findgcd(int a, int b) {
        if (b == 0)
            return a;
        return findgcd(b, a % b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==NULL) return head;
        ListNode* ptr = head,*temp,*nex=head->next;
        while (nex!=NULL) {
            temp=new ListNode(findgcd(ptr->val,nex->val));
            temp->next=nex;
            ptr->next=temp;
            ptr=nex;
            nex=nex->next;
        }
        return head;
    }
};