class Solution {
public:
    bool isAnagram(string s, string t) {
       vector<int>a(26,0);
       vector<int>b(26,0);
       for(char x:s) a[x-'a']++;
       for(char y:t) b[y-'a']++;
       for(int i=0;i<26;i++){
        if(a[i]!=b[i]) return false;
       }
       return true;
   }
};
