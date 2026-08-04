class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        vector<int>v;
        for(int i=mini;i<=maxi;i++)
        {
            v.push_back(i);

        }
      for (int i = 0; i < nums.size(); i++) {
            auto it = find(v.begin(), v.end(), nums[i]);
            if (it != v.end()) {
                v.erase(it);
            }
        }
        return v;
    }
};