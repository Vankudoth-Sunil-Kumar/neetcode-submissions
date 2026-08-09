#include<bits/stdc++.h>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       // bool ok=false;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        for(auto t : mp) if(t.second>1) return true;
        return false;
    }
};