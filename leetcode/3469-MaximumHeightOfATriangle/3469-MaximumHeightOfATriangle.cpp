// Last updated: 4/13/2026, 3:31:56 PM
class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        int i=1,r1=red,b1=blue,hr=0,hb=0;
        while(r1>=0&&b1>=0){
            if(i%2!=0){r1-=i;}
            else b1-=i;
            if(r1>=0&&b1>=0) hr++;
            i++;
        }
        r1=red;
        b1=blue;
        i=1;
        while(r1>=0&&b1>=0){
            if(i%2==0){r1-=i;}
            else b1-=i;
            if(r1>=0&&b1>=0) hb++;
            i++;
        }
        return (hr>hb?hr:hb);
    }
};