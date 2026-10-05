class Solution {
public:
    string defangIPaddr(string s) {
        string result;
        for (char c : s) {
            if (c == '.') {
                result += "[.]";
            } else {
                result += c;
            }
        }
        return result;
    }
};
