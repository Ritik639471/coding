// Last updated: 4/13/2026, 3:34:23 PM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int arrSize, int* returnSize) {
    int temp,max=arr[arrSize-1];
    arr[arrSize-1]=-1;
    for(int i=1;i<arrSize;i++){
        temp=max;
        if(arr[arrSize-1-i]>max) max=arr[arrSize-1-i];
        arr[arrSize-1-i]=temp;
    }
    * returnSize=arrSize;
    return arr;
}