// Last updated: 4/13/2026, 3:37:56 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode*ptr= head;
    int i=0;
    while(ptr!=NULL){
        ptr=ptr->next;
        i++;
    }
    int arr[i];
    int n=0;
    ptr=head;
    while(ptr!=NULL){
        arr[n]=ptr->val;
        ptr=ptr->next;n++;
    }
    n=0;
    while(n<i/2){
        if (arr[n]!=arr[i-n-1]) return 0;
        n++;
    }
    return 1;
}