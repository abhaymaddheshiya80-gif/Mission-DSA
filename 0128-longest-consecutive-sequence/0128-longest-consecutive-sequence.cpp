// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         set<int>st;
//         st.insert(nums.begin(),nums.end());
//         int ans=0;
//         for(int n:st){
//             if(st.find(n-1)==st.end()){
//                 int num=n;
//                 int count=1;
//                  while(st.find(num+1)!=st.end()){
//                     count++;
//                     num++;
//                  }
//                 ans=max(ans,count);
//             }
//         }
//         return ans;
//     }
// };















class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int len =1;
        int ans = 1;
        
        for(int i =1;i < nums.size(); i++){
            if(nums[i] - 1 == nums[i-1]){
                len++;
                ans = max(ans,len);
            }else if(nums[i] == nums[i-1]){
                continue;
            }else {
                len = 1;
            }

        }
        return ans;

    }
};






































