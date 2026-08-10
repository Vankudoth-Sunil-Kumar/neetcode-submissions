class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp[nums[i]]>0) return true;
            mp[nums[i]]++;
            if(i>=k){
                mp[nums[i-k]]--;
            }
        }
        return false;
    }
};