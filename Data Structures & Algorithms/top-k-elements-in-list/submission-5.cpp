class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       int n=nums.size();
       unordered_map<int,int>mp;
       for(int x:nums) mp[x]++;
       priority_queue<pair<int,int>>p;
       for(auto x:mp) p.push({x.second,x.first});
       vector<int>ans;
       while(k--){
        ans.push_back(p.top().second);
        p.pop();
       }
       return ans;
    }
};
