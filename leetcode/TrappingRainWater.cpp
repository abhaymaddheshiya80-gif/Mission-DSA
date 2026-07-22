// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n = height.size();
//         int result = 0;

//         for (int i = 1; i < n - 1; i++) {
//             int lmax = 0, rmax = 0;

//             for (int j = i - 1; j >= 0; j--) {
//                 lmax = max(lmax, height[j]);
//             }

//             for (int j = i + 1; j < n; j++) {
//                 rmax = max(rmax, height[j]);
//             }

//             if (lmax > height[i] && rmax > height[i]) {
//                 result += min(lmax, rmax) - height[i];
//             }
//         }
//         return result;
//     }
// };
class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int lmax = 0, rmax = 0;
        int water = 0;

        while (left < right) {
            if (height[left] < height[right]) {
                lmax = max(lmax, height[left]);
                water += lmax - height[left];
                left++;
            } else {
                rmax = max(rmax, height[right]);
                water += rmax - height[right];
                right--;
            }
        }
        return water;
    }
};
