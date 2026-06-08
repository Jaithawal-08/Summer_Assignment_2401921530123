class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26] = {0};
        for(int i = 0; i < ransomNote.size(); i++){
            arr[magazine[i]-'a']++;
        }
        for(int x : ransomNote){
            if(arr[x-'a'] == 0) return false;
            else arr[x-'a']--;
        }
        return true;
    }
};
