// Last updated: 4/13/2026, 3:42:02 PM
//int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
int* twoSum(int* nums, int numsSize, int target,int * returnSize) {
    int* arr = (int*)malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        int j = 0;
        while (j < numsSize) {
            if (nums[i] + nums[j] == target && i != j) {
                arr[0] = i;
                arr[1] = j;
                *returnSize=2;
                return arr;
            }
            j++;
        }
    }
    return 0;
}