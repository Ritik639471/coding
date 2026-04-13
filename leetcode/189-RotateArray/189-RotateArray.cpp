// Last updated: 4/13/2026, 3:38:25 PM
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int i=0,j=n-1-k,temp;
        while(i<=j){
           temp=nums[i];
           nums[i]=nums[j];
           nums[j]=temp;
           i++;
           j--;
        }
        i=n-k;j=n-1;
        while(i<=j){
           temp=nums[i];
           nums[i]=nums[j];
           nums[j]=temp;
           i++;
           j--;
        }
        i=0;j=n-1;
        while(i<=j){
           temp=nums[i];
           nums[i]=nums[j];
           nums[j]=temp;
           i++;
           j--;
        }
    }
};