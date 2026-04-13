// Last updated: 4/13/2026, 3:31:03 PM
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        
        // 1. Create a new vector with absolute values.
        // We use long long to prevent overflow during squaring.
        vector<long long> abs_nums;
        for (int x : nums) {
            abs_nums.push_back(abs(static_cast<long long>(x)));
        }
        
        // 2. Sort the absolute value vector
        sort(abs_nums.begin(), abs_nums.end());
        
        // 3. Get sum by adding square from back and subtracting square from front
        long long total_sum = 0;
        int l = 0;
        int r = abs_nums.size() - 1;
        
        // We alternate, starting by adding from the back (the largest number)
        bool add_from_back = true; 

        while (l <= r) {
            if (add_from_back) {
                // Add square from the back
                total_sum += abs_nums[r] * abs_nums[r];
                r--;
            } else {
                // Subtract square from the front
                total_sum -= abs_nums[l] * abs_nums[l];
                l++;
            }
            // Flip the flag to alternate the operation
            add_from_back = !add_from_back;
        }
        
        return total_sum;
    }
};