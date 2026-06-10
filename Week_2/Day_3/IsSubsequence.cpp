class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.empty()) return true;
        int a=0;
        for(int i =0;i<t.size();i++){
           if(t[i]==s[a]) a++;
           if(a==s.size()) return true;
        }
        return false;
    }
};
