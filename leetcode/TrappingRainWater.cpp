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
// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int left = 0, right = height.size() - 1;
//         int lmax = 0, rmax = 0;
//         int water = 0;

//         while (left < right) {
//             if (height[left] < height[right]) {
//                 lmax = max(lmax, height[left]);
//                 water += lmax - height[left];
//                 left++;
//             } else {
//                 rmax = max(rmax, height[right]);
//                 water += rmax - height[right];
//                 right--;
//             }
//         }
//         return water;
//     }
// };

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int trap(vector<int>& h) {
    stack<int> st;  // stack to store indices
    int water = 0;

    for (int i = 0; i < h.size(); i++) {
        // While current bar is taller than the bar at stack top
        while (!st.empty() && h[i] > h[st.top()]) {
            int top = st.top();
            st.pop();

            if (st.empty()) break;  // no left boundary

            int width = i - st.top() - 1;
            int height = min(h[i], h[st.top()]) - h[top];
            water += width * height;
        }
        st.push(i);
    }

    return water;
}

int main() {
    vector<int> h = {4,2,0,3,2,5};
    cout << "Trapped water: " << trap(h) << endl;  // Output: 6
    return 0;
}

