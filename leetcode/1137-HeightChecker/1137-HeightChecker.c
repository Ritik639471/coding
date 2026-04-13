// Last updated: 4/13/2026, 3:34:24 PM
int heightChecker(int* heights, int heightsSize) {
    int * arr=(int *)malloc(heightsSize*sizeof(int));
    int temp;
    arr[0]=heights[0];
    for(int i=0;i<heightsSize-1;i++){
        for(int j=1;j<heightsSize-i;j++){
            if(i==0) arr[j]=heights[j];
            if(arr[j-1]>arr[j]){
                temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    temp=0;
    for(int i=0;i<heightsSize;i++){
         if(arr[i]!=heights[i]) temp++;
    }
    return temp;
}