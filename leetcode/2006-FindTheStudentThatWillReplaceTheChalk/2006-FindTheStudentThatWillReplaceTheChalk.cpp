// Last updated: 4/13/2026, 3:33:28 PM
class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size();
        long int sum=(long int)chalk[0];
        int lo=0,hi=n-1;
        for(int i=1;i<n;i++){ 
            if(sum+(long int)chalk[i]>(long int)INT_MAX){
                hi=i-1;
                break;
            }
            else{chalk[i]+=chalk[i-1];
            sum=chalk[i];}
        }
        k=k%sum;
        if(k==0) return 0;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(chalk[mid]==k) return mid+1;
            else if(chalk[mid]<k) lo=mid+1;
            else hi=mid-1;
        }
        return lo+(chalk[lo]<k);
    }
};