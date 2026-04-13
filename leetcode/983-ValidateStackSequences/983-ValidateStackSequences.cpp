// Last updated: 4/13/2026, 3:34:48 PM
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n1=pushed.size();
        vector<int> ans(n1,0);
        int j=0,k=0;
        for(int i=0;i<n1;i++){
            ans[k]=pushed[i];
            k+=1;
            while(k>0&&ans[k-1]==popped[j]){
                k--;
                j++;
            }
        }
        return k==0;
    }
};