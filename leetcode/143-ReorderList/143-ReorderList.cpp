// Last updated: 4/13/2026, 3:38:49 PM
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
   ListNode *sol(ListNode *head, ListNode *temp)
    {
        if(temp == NULL)return head;
        
        ListNode *curr = sol(head, temp->next);
        
        if(!curr)return NULL;
        if(curr==temp){
            curr->next = NULL;
            return NULL;
        }
        if(curr->next == temp)
        {
            temp->next=NULL;
            return NULL;
        }
        
        temp->next = curr->next;
        curr->next = temp;
        curr = temp->next;
        
        return curr;
    }
    void reorderList(ListNode* head) {
        sol(head, head);
    }
	
};