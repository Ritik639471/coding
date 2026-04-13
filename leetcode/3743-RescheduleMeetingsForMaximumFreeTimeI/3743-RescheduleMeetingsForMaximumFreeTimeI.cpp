// Last updated: 4/13/2026, 3:31:11 PM
class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& st, vector<int>& et) {
       vector<int>a(st.size()+1);
        for(int i=1;i<a.size()-1;i++){
            a[i]=abs(st[i]-et[i-1]);
        }
        a[0]=st[0];
        int i=0,j=0,ans=0,re=0;
        a[a.size()-1]=abs(eventTime-et[et.size()-1]);
        while(j<k+1){
            ans+=a[j];
            j++;
        }
        re=ans;
        while(j<a.size()){
            ans+=a[j]-a[i];
            re=max(re,ans);
            j++;
            i++;
        }
        return re;
    }
};