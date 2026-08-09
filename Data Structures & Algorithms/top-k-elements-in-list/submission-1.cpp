class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int x:nums) {
            mp[x]++;
        }
        priority_queue<pair<int, int>> pq;
        for(auto &p:mp){
            pq.push({p.second, p.first});
        }
        while(k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
