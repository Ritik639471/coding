// Last updated: 4/13/2026, 3:33:52 PM
int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size, int d) {
    int k,dif,n=0;
    for(int i=0;i<arr1Size;i++){
        k=1;
        for(int j=0;j<arr2Size;j++){
            dif=arr1[i]-arr2[j];
            if(dif>=0&&dif<=d){
                k=0;
                break;
            }
            else if(dif<0&&(-dif)<=d){
                k=0;
                break;
            }
        }
        if(k==1) n++;
    }
    return n;
}