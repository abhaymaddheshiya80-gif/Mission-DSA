class Solution {
public:
    int maxDepth(string s) {
        int n=s.length();
        int count=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='('){
                count++;
            }
               maxi=max(maxi,count);
            if(s[i]==')'){
                count--;
            }
        }
        return maxi;
    }
};
// class Solution {
// public:
//     int maxDepth(string s) {
//         int maxi=0;
//         unordered_map<char,char>mp;
//         mp[')']='(';
//          stack<char>st;
//              int i=0;
//              int n=s.size();
//              while(i<n){
//                 if(!st.empty()&&st.top()==mp[s[i]]){
//                     st.pop();
//                 }
//                 else if(s[i]=='('){
//                     st.push(s[i]);
//                     int n=st.size();
//                     maxi=max(maxi,n);
//                 }
//                 i++;


//              }
//             return maxi;
        
        
//     }
// };