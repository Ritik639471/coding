// Last updated: 4/13/2026, 3:32:41 PM
class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        int n=nums.size();
        int maxele=0;
        for(int i=0;i<n;i++){ maxele=max(nums[i],maxele);}
        vector<bool> sieve(maxele+1);
        sieve[0]=true;
        sieve[1]=true;
        vector<int> v;
        v.push_back(2);
        for(int i=3;i<=maxele;i+=2){
            if(sieve[i]==false){
                v.push_back(i);
                for(int j=2*i;j<=maxele;j+=i){
                    sieve[j]=true;
                }
            }
            else continue;
        }
        sieve.clear();
        int ans=0;
        int m=v.size();
        for(int i=0;i<n;i++){
            int j=0;
            while(j<m &&( v[j]==-1||v[j]<=nums[i])){
                if(v[j]!=-1&&nums[i]%v[j]==0){
                    v[j]=-1;
                    ans+=1;
                }
                j++;
            }
        }
        return ans;
    }
};