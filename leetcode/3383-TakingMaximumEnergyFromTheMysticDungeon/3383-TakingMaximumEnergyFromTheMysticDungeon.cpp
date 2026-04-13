// Last updated: 4/13/2026, 3:32:27 PM
class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        vector<int> num(k,0);
        int max=0;
        for(int i=0;i<energy.size();i++){
            int j=i%k;
            num[j]+=energy[energy.size()-1-i];
            if(i==0||num[j]>max) max=num[j];
        }
        return max;
    }
};