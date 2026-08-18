class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        map<int, int> mp;
        int n = nums.size();

        for (int i = 0; i <= n - k; i++) {
            set<int> st;

            for (int j = i; j < i + k; j++) {
                st.insert(nums[j]);
            }

            for (int x : st) {
                mp[x]++;
            }
        }

        int ans = -1;

        for (auto x : mp) {
            if (x.second == 1) {
                ans = max(ans, x.first);
            }
        }

        return ans;
    }
};