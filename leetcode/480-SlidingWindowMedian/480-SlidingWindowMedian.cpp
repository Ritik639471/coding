// Last updated: 4/13/2026, 3:36:46 PM
class Solution {
public:
    multiset<int>s1,s2;
    void balance(int a){
        while(s1.size()>s2.size()+a){
            s2.insert(*(s1.rbegin()));
            s1.erase(s1.find(*(s1.rbegin())));
        }
    }
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size(),a,b;
        vector<double>ans(n-k+1);

        if(k==1){
            for(int i=0;i<n;i++){
                ans[i]=nums[i]*1.0;
            }
            return ans;
        }
        if(k==2){
            for(int i=0;i<n-1;i++){
                ans[i]=((long)nums[i]+(long)nums[i+1])/2.0;
            }
            return ans;
        }
        for(int i=0;i<k;i++){
            s1.insert(nums[i]);
        }
        balance(k%2);
        if(k%2==0){
            ans[0]=((long)*(s1.rbegin())+(long)*(s2.begin()))/2.0;
        }
        else {
            ans[0]=*(s1.rbegin());
        }
        for(int i=0;i<n-k;i++){
            if(*(s1.rbegin())>=nums[i]){
                s1.erase(s1.find(nums[i]));
                s1.insert(*(s2.begin()));
                s2.erase(s2.find(*(s2.begin())));
            }else{
                s2.erase(s2.find(nums[i]));
            }
            s1.insert(nums[i+k]);
            balance(k%2);
            if(k%2==0){
               ans[i+1]=((long)*(s1.rbegin())+(long)*(s2.begin()))/2.0;
            }
            else {
               ans[i+1]=*(s1.rbegin())*1.0;
            }
        }
        return ans;
    }
};