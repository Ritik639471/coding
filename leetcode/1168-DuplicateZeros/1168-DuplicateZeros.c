// Last updated: 4/13/2026, 3:34:20 PM
void duplicateZeros(int* arr, int arrSize) {
    for(int i=0;i<arrSize;i++){
        if(arr[i]==0){
            for(int j=0;j<arrSize-i-1;j++){
                arr[arrSize-j-1]=arr[arrSize-j-2];
            }
            i++;
        }
    }
}