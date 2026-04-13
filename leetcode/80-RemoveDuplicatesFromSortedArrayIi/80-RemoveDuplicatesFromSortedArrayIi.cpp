// Last updated: 4/13/2026, 3:39:59 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int j=0,count=0,prev=nums[0],n=nums.size();
        for(int i=0;i<n;i++){
            nums[j]=nums[i];
            if(prev==nums[i]){
                count+=1;
            }
            else {
                count=1;
            }
            j++;
            if(count>2){
                j--;
            }
            prev=nums[i];
        }
        return j;
    }
};