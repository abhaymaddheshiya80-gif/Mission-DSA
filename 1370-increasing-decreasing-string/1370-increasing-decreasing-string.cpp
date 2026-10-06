class Solution {
public:
    string sortString(string s) {
        int n= s.size();
        string ans = "";
        unordered_map<char,int>mp;
         set<char> st;

    for(char ch : s){
        st.insert(ch);
        mp[ch]++;
    }
  
    while(!mp.empty()){
    for(auto x:st){
        if(mp[x]>0){
        ans+=x;
        mp[x]--;
        }else{
            mp.erase(x);
        }
    }
   
    for (auto it = st.rbegin(); it != st.rend(); ++it) {
   if(mp[*it]>0){
    ans += *it;
      mp[*it]--;
   }else{
    mp.erase(*it);
   }
}
    }
    return ans;
    }
};