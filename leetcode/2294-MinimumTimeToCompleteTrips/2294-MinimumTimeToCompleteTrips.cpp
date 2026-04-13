// Last updated: 4/13/2026, 3:33:10 PM
class Solution {
public:
    bool Totaltrip(vector<int>& time,long int mid,int totalTrips){
        long int trip=0;
        for(int i=0;i<time.size();i++){
            trip+=mid/((long int)time[i]);
        }
        return trip>=totalTrips;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        long int t;
        int n=time.size();
        long int lo=*min_element(time.begin(),time.end());
        long int hi=(long int)(*max_element(time.begin(),time.end()))*totalTrips;

        while(lo<=hi){
            long int mid=lo+(hi-lo)/2;
            if(Totaltrip(time,mid,totalTrips)){
                if(t>mid) t=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return t;
    }
};