// Last updated: 4/13/2026, 3:33:17 PM
class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n=rectangles.size();
        unordered_map<long double,long long> m;
        long long num=0;
        for(int i=0;i<n;i++){
            long double temp=(long double)rectangles[i][0]/(long double)rectangles[i][1];
            if(m[temp]==0){m[temp]+=1;}
            else{
                num+=m[temp];
                m[temp]++;
            }
        }
        return num;
    }
};