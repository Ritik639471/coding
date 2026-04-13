// Last updated: 4/13/2026, 3:34:01 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    int number = 0;
    int twos = 1;
    struct ListNode* p = head;
    while (p->next != NULL){
        p = p->next;
        twos *= 2;
    }
    p = head;
    while (p != NULL){
        number += p->val * twos;
        twos /= 2;
        p = p->next;
    }
    return number;
}