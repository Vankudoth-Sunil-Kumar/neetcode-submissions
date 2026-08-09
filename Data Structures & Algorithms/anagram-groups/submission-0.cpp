class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector< string> >ans;
        int n=strs.size();
        unordered_map<string,vector<string>>maap;
        for(string x:strs){
            string key=x;
            sort(key.begin(),key.end());
            maap[key].push_back(x);
        }
        for(auto &it:maap){
            ans.push_back(it.second);
        }
        return ans;
          
    }
};
