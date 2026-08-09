class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs[strs.size()-1];
        int cnt=0;
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]==last[i]) cnt++;
            else break;
        }
        return strs[0].substr(0,cnt);
    }
};