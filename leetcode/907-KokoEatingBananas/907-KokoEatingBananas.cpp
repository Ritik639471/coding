// Last updated: 4/13/2026, 3:35:11 PM
class Solution {
public:
    bool time(vector<int>& piles,int mid, int h){
        long int ans=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            ans+=(long int)(piles[i]/mid);
            if((piles[i]%mid)!=0) ans++;
        }
        return ans<=(long int)h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo=1;
        int hi=*max_element(piles.begin(),piles.end());
        cout<<hi<<endl;
        int ans=hi;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(time(piles,mid,h)){
                if(mid<ans) ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
};