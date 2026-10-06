class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> storage = {
            ".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",
            "....", "..",   ".---", "-.-",  ".-..", "--",   "-.",
            "---",  ".--.", "--.-", ".-.",  "...",  "-",    "..-",
            "...-", ".--",  "-..-", "-.--", "--.."};

    unordered_set<string>st;
    for(int i=0;i<words.size();i++)
    {
        string temp="";
        for(int j=0;j<words[i].size();j++)
        {
            string ch=storage[words[i][j]-97];
            temp+=ch;
        }
        st.insert(temp);
    }
    return st.size();
    }
};