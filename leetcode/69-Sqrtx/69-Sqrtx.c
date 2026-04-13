// Last updated: 4/13/2026, 3:40:18 PM
int mySqrt(int x) {
   long int s=0,e=x;
       long int ans=0,m;
        while(s<=e)
        {
           m=s+(e-s)/2;
            if(m*m==x)
                return m;
           else if(m*m<x)
            {
                s=m+1; 
                ans=m;
            }
            else
               e=m-1;  
        }
        return ans;
}