// Last updated: 4/13/2026, 3:41:45 PM
int maxArea(int* height, int heightSize) {
    int maxarea=0;
    int i=0,j=heightSize-1;
    while(i<j){
        int heigh=(height[i]<height[j])?height[i]:height[j];
        int area =((heigh)*(j-i));
        if(maxarea<area)
           maxarea=area;
        if(height[i]<height[j]) 
           i++;
        else 
          j--;
       }
    return maxarea;
}