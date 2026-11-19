// class Solution {
// public:
//     int getCommon(vector<int>& nums1, vector<int>& nums2) {
//         int n1=nums1.size();
//         int n2=nums2.size();
//         set<int>s1;
//         set<int>s2;
//       for(int n: nums1){
//         s1.insert(n);
//       }
//        for(int n: nums2){
//         s2.insert(n);
//       }
//       vector<int>v;
//       for(int n: s1){
//         v.push_back(n);
//       }
//        for(int n: s2){
//         v.push_back(n);
//       }
//       sort(v.begin(),v.end());
//       for(int i=0;i<v.size()-1;i++){
//         if(v[i]==v[i+1])return v[i];
//       }
//       return 0;
//     }
// };
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j])
                return nums1[i];

            if (nums1[i] < nums2[j])
                i++;
            else
                j++;
        }

        return -1;
    }
};