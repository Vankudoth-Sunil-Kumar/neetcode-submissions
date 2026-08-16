class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(auto s:strs){
            ans+=to_string(s.size())+'#'+s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int leg=stoi(s.substr(i, j - i));
            j++;
            ans.push_back(s.substr(j,leg));
            i=j+leg;
        }
        return ans;
    }
};
