class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>str_s;
        unordered_map<int,int>str_t;
        if(s.size()!=t.size()) return false;
        for(int x:s){
            str_s[x]++;
        }
        for(int x:t){
            str_t[x]++;
        }
        for(int y:s){
            if(str_s[y]!=str_t[y]) return false;
        }
      return true;
   }
};
