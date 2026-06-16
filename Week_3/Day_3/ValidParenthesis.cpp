class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char x : s) {
            if (x == '(' || x == '{' || x == '[') {
                st.push(x);
            } 
            else {
                if (st.empty()) return false;
                char ele = st.top();
                st.pop();
                if ((x == ')' && ele != '(') ||
                    (x == ']' && ele != '[') ||
                    (x == '}' && ele != '{')) {
                    return false;
                }
            }
        }
        return st.empty(); 
    }
};
