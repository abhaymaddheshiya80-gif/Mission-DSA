
class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> freq(26, 0);

      for(auto ch:s)
      {
        freq[ch-'a']++;
      }
      for(auto ah:t)
      {
        freq[ah-'a']--;
      }
      int step=0;
      for(auto x:freq)
      {
        step+=abs(x);
      }
      return step/2;

    }
};
