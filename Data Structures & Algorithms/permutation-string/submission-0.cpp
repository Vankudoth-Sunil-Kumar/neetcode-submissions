class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
         string str=s1;
        sort(str.begin(),str.end());
        for(int i=0;i<n2;i++){
            string ok=s2.substr(i,n1);
            sort(ok.begin(),ok.end());
            if(ok==str) return true;
        }
        return false;
    }
};
