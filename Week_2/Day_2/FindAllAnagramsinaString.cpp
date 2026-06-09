class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int np=p.size();
        int ns=s.size();
        vector<int>fs(26,0);
        vector<int>fp(26,0);
        vector<int>ans;
        if(np>ns) return {};
        for(int i =0;i<np;i++){
            fs[s[i]-'a']++;
            fp[p[i]-'a']++;
        }
        if(fs==fp) ans.push_back(0);
        for(int i =np;i<ns;i++){
            fs[s[i]-'a']++;
            fs[s[i-np]-'a']--;
            if(fs==fp) ans.push_back(i-np+1);
        }
        return ans;
    }
};
