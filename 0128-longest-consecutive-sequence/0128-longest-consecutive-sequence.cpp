class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        set<int>st2;
        st.insert(nums.begin(),nums.end());
        int ans=0;
        for(int n:st){
            if(st.find(n-1)==st.end()&& st2.find(n)==st2.end()){
                st2.insert(n);
                int num=n;
                int count=1;
                 while(st.find(num+1)!=st.end()){
                    count++;
                    num++;
                 }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};








































// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         set<int> st;
//         st.insert(nums.begin(), nums.end());

//         int ans = 0;

//         for (int num : st) {
//             if (st.find(num - 1) == st.end()) {
//                 int curr = num;
//                 int cnt = 1;

//                 while (st.find(curr + 1) != st.end()) {
//                     curr++;
//                     cnt++;
//                 }

//                 ans = max(ans, cnt);
//             }
//         }

//         return ans;
//     }
// };