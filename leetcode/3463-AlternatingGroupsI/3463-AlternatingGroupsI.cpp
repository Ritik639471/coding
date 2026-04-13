// Last updated: 4/13/2026, 3:31:59 PM
class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int num=0,n=colors.size(),i=0;
        while(i<n){
            int j=(i+1)%n;
            int k=(i+2)%n;
            if(colors[j]!=colors[k]&&colors[i]==colors[k]) num++;
            i++;
        }
        return num;
    }
};