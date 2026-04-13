// Last updated: 4/13/2026, 3:34:52 PM


bool validMountainArray(int* arr, int arrSize){
   int i=0,pre=arr[0];
   if(arrSize<3) return 0;
   if(arr[0]>arr[1]) return 0;
   i=i+1;
    while(i<arrSize){
       if(arr[i]<pre){
           break;
       }
       else if(arr[i]==pre){
           return 0;
       }
       pre=arr[i];
       i++;
   }
   if(i==arrSize) return 0;
   while (i<arrSize){
       if(arr[i]>pre){
           return 0;
       }
       else if(arr[i]==pre){
           return 0;
       }
       pre=arr[i];
       i++;
   }
   return 1;
}