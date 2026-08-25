
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s(nums.begin(), nums.end()); // O(n) build
        int a = 1;
        while (true) {
            int candidate = k * a;
            if (s.find(candidate) == s.end()) {
                return candidate;
            }
            a++;
        }
        return -1; // unreachable
    }
};
