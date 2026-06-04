class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int len = strs.size();
        string first = strs[0];
        string last = strs[len-1];
        int low = min(first.size(), last.size());
        string ans = "";

        for(int i = 0; i < low; i++){
            if(first[i] != last[i]) break;
            ans += first[i];
        }
        return ans;
    }
};
