// Last updated: 4/13/2026, 3:40:17 PM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    digits[digitsSize-1]=digits[digitsSize-1]+1;
    int n=0,i=1;
    while(i<=digitsSize){
        n=digits[digitsSize-i];
        digits[digitsSize-i]=n%10;
        if (i!=digitsSize) 
        digits[digitsSize-i-1]=digits[digitsSize-i-1]+n/10;
        if(i==digitsSize && n/10!=0){
            int * array=(int *)malloc((digitsSize+1)*sizeof(int));
            int j=digitsSize-1;
            while(j>-1){
                 array[j+1]=digits[j];
                 j--;
            }
            array[j+1]=n/10;
            *returnSize=digitsSize+1;
            return array;
        }
        i++;
    }
    *returnSize=digitsSize;
    return digits;
}