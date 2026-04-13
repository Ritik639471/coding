// Last updated: 4/13/2026, 3:34:32 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

struct ListNode * findNextLarge(struct ListNode * head, int ** retarr, int *returnSize)
{
  int cur = *returnSize;
  *retarr = realloc(*retarr, sizeof(int) * (*returnSize + 1));

  (*retarr)[*returnSize] = 0;

  (*returnSize)++;
  struct ListNode * next = head->next;
  while (next) {
    if (next->val > head->val) {
        (*retarr)[cur] = next->val;
        break;
    } else {
      next = findNextLarge(next, retarr, returnSize);
    }
  } 
  return next;
}
int* nextLargerNodes(struct ListNode* head, int* returnSize) {
    int * retarr = NULL;
    *returnSize = 0;

    if (head) {
      do {
        head = findNextLarge(head, &retarr, returnSize);
      } while (head);
    }    
    return retarr;
} 