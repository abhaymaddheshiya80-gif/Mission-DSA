class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(), prices.end(), greater<int>());   
        sort(discounts.begin(), discounts.end(), greater<int>()); 

        int n1 = prices.size();
        int n2 = discounts.size();
        double total = 0.0;   

        int i = 0;
        while (i < n1 && i < n2) {
            total += prices[i] * (100 - discounts[i]) / 100.0;
            i++;
        }

       
        while (i < n1) {
            total += prices[i];
            i++;
        }

        return total;
    }
};
