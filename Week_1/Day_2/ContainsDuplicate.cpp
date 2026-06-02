// Can do it with sorting or with set data structure one has more time complexity one has more space complexity 

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>st;
        for(int x:nums){
          if(st.count(x)) return true;
          st.insert(x);
        }
      return false;
    }
};
