class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> match = {{')', '('}, {']', '['}, {'}', '{'}};
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } else {
                if (st.empty() || st.top() != match[c]) return false;   // guard first
                st.pop();
            }
        }
        return st.empty();   // leftover openers mean invalid
    }
};