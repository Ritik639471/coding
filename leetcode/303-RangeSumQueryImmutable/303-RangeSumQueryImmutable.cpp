// Last updated: 4/13/2026, 3:37:26 PM
class NumArray {
public:
    int* ans;
    NumArray(vector<int>& nums) {
        ans=(int*)malloc(nums.size()*sizeof(int));
        ans[0]=nums[0];
        for(int i=1;i<nums.size();i++){ans[i]=ans[i-1]+nums[i];}
    }
    
    int sumRange(int left, int right) {
        if(left==0) return ans[right];
        return ans[right]-ans[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */