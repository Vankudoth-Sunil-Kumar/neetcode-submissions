class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
       int start=0;
       int end=n-1;
       string ans;
       for(char c:s){
        if(isalnum(c)) ans+=tolower(c);
       }
       string t=ans;
       reverse(ans.begin(),ans.end());
       return t==ans;

    }
};
