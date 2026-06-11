class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty()) return "";      
        int n = s.size();
        string longest = s.substr(0,1);
        for(int i = 0; i < n; i++) {       
            int low = i;
            int high = i;     
            while(low >= 0 && high < n && s[low] == s[high]) {
                low--;
                high++;
            }          
            string palindrome1 = s.substr(low + 1, high - low - 1);
            if(palindrome1.length() > longest.length())
                longest = palindrome1;
            low = i;
            high = i + 1;
            while(low >= 0 && high < n && s[low] == s[high]) {
                low--;
                high++;
            }
            string palindrome2 = s.substr(low + 1, high - low - 1);
            if(palindrome2.length() > longest.length())
                longest = palindrome2;
        }
        return longest;
    }
};
