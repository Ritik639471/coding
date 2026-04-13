// Last updated: 4/13/2026, 3:37:09 PM
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int lo=1,hi=n;
        while(lo<=hi){
             int mid=lo+(hi-lo)/2;
             int i=guess(mid);
             if(i==0) return mid;
             else if(i==-1) hi=mid-1;
             else{lo=mid+1;}
        }
        return hi;
    }
};