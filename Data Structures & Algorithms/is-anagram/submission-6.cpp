class Solution {
public:
    bool isAnagram(string s, string t) {
       vector<int>a(26,0);
       //vector<int>b(26,0);
       for(char x:s) a[x-'a']++;
       for(char y:t) a[y-'a']--;
       for(int i=0;i<26;i++){
        if(a[i]!=0) return false;
       }
       return true;
   }
};
