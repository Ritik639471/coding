// Last updated: 4/13/2026, 3:39:51 PM
class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        vector<int>a(n,0);
        vector<int>b(n,0);
        stack<int>ab;
        ab.push(1);
        a[0]=0;
        for(int i=1;i<n;i++){
            while(!(ab.empty())&&h[ab.top()-1]>=h[i]){ ab.pop();}
            if(ab.empty()){a[i]=0;ab.push(i+1);continue;}
            a[i]=ab.top();
            ab.push(i+1);
        }
        ab=stack<int>();
        ab.push(n);
        b[n-1]=n+1;
        for(int i=n-2;i>=0;i--){
            while(!(ab.empty())&&h[ab.top()-1]>=h[i]){ ab.pop();}
            if(ab.empty()){b[i]=n+1;ab.push(i+1);continue;}
            b[i]=ab.top();
            ab.push(i+1);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,h[i]*(b[i]-a[i]-1));
        }
        return ans;
    }
};