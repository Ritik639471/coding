// Last updated: 4/13/2026, 3:31:07 PM
class Solution {
vector<bool> isPrime;
void sieve() {
    int n=100009;
    isPrime=vector<bool>(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
}
public:
    long long splitArray(vector<int>& nums) {
        sieve();
        long long sum1=0,sum2=0;
        for(int i=0;i<nums.size();i++){
            if(isPrime[i]) sum1+=nums[i];
            else sum2+=nums[i];
        }
        return abs(sum1-sum2);
    }
};