class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       int n=nums.size();
       unordered_map<int,int>mp;
       for(int x:nums) mp[x]++;
      vector<vector<int>>bucket(n+1);
      for(auto x:mp){
        int ele=x.first;
        int fre=x.second;
        bucket[fre].push_back(ele);
      }
      vector<int>ans;
      for(int i=n;i>=1;i--){
        for(int elem:bucket[i]){
            ans.push_back(elem);
            if(ans.size()==k)
            return ans;
        }
      }
    return ans;

    }
};
