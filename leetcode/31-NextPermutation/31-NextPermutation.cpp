// Last updated: 4/13/2026, 3:41:08 PM
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]) {pivot=i;break;}
        }
        cout<<pivot;
        if(pivot==-1){reverse(nums.begin(),nums.end());return;}
        reverse(nums.begin()+pivot+1,nums.end());
        int j=-1;
        for(int i=pivot+1;i<nums.size();i++){
            if(nums[pivot]<nums[i]){j=i;break;}
        }
        int temp=nums[pivot];
        nums[pivot]=nums[j];
        nums[j]=temp;
        return;
    }
};