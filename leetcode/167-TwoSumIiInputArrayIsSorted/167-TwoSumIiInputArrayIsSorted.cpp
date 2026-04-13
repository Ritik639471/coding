// Last updated: 4/13/2026, 3:38:31 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low=0,high=numbers.size()-1;
        while(low<high){
            if((numbers[low]+numbers[high])==target){return {low+1,high+1};}
            else if(numbers[low]+numbers[high]<target){low++;}
            else{high--;}
        }
        return {0,0};
    }
};