// Last updated: 4/13/2026, 3:33:20 PM
class Solution {
public:
    void helper(vector<string>& nums,vector<int>& v){
        int num=0,n=nums.size();
      for(int i=0;i<n;i++){
         num=0;
         int j=n-1,x=1;
         while(j>=0){
            num+=(nums[i][j]-'0')*x;
            x*=2;
            j--;
         }
         v.push_back(num);
      }
    }
    string findDifferentBinaryString(vector<string>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n=nums.size();
        vector<int> v;
        helper(nums,v);
        sort(v.begin(),v.end());
        string s="0000000000000000";
        for(int i=0;i<pow(2,n);i++){
            if(i<n&&v[i]>i||i==n){
                int k=i;
                for(int j=0;j<n;j++){
                    s[n-j-1]=k%2+'0';
                    k/=2;
                    if(k==0) return s.substr(0,n);
                }
                return s.substr(0,n);
            }
        }
        return s.substr(0,n);
    }
};