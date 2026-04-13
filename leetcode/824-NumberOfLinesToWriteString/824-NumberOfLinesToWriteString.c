// Last updated: 4/13/2026, 3:35:21 PM


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numberOfLines(int* widths, int widthsSize, char * s, int* returnSize){
    int* array=(int*)malloc(2*sizeof(int));
    int i=0,m=0;
    array[0]=0;
    while(s[i]!='\0'){
        if(m+widths[s[i]-'a']<=100){
            m=m+widths[s[i]-'a'];
            i++;
        }
        else{
            m=0;
            array[0]=array[0]+1;
        }
    }
    array[0]=array[0]+1;
    array[1]=m;
    *returnSize=2;
    return array;
}