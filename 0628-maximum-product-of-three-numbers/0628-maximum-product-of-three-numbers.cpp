class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        // Case 1: product of last three (largest)
        int option1 = nums[n-1] * nums[n-2] * nums[n-3];
        // Case 2: product of two smallest (could be negative) and largest
        int option2 = nums[0] * nums[1] * nums[n-1];
        return max(option1, option2);
    }
};
