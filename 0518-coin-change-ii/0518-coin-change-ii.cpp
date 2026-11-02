class Solution {
public:
    int rec(int index, int amount, vector<int>& coins,
            vector<vector<int>>& dp) {

        if (amount == 0) return 1;

        if (amount < 0) return 0;

        if (index == coins.size()) return 0;

        if (dp[index][amount] != -1) {
            return dp[index][amount];
        }

        int ans = 0;

        for (int i = index; i < coins.size(); i++) {

            ans += rec(i, amount - coins[i], coins, dp);
        }

        return dp[index][amount] = ans;
    }

    int change(int amount, vector<int>& coins) {

        int row = coins.size();
        int column = amount + 1;

        vector<vector<int>> dp(row, vector<int>(column, -1));

        return rec(0, amount, coins, dp);
    }
};