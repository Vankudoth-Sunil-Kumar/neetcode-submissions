class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(!isalnum(s[i])) continue;
            str+=tolower(s[i]);
        }
        int k=str.size();
        int i=0,j=k-1;
        while(i<j){
            if(str[i]!=str[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
