class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int prev = 0;
        for(int i = 0; i <= n; i++) {
            if(i == n || s[i] == ' ') {
                reverse(s.begin() + prev, s.begin() + i);
                prev = i + 1;
            }
        }
        return s;
    }
};
