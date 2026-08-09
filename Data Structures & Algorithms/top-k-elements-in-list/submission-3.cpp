class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       int n=nums.size();
       unordered_map<int,int>mp;
       for(int x:nums) mp[x]++;
       vector<pair<int,int>>v;
       for(auto c:mp){
        v.push_back({c.second,c.first});
       }
       sort(v.rbegin(),v.rend());
       vector<int>ans;
       for(auto x:v){
        if(k>0){
            ans.push_back(x.second);
            k--;
        }
        else break;
       }
       return ans;
    }
};
