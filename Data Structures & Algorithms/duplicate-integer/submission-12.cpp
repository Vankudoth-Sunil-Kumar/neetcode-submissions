#include<bits/stdc++.h>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       // bool ok=false;
        int n=nums.size();
       unordered_set<int>s;
       for(int i=0;i<n;i++){
        if(s.count(nums[i])) return true;
        else s.insert(nums[i]);
       }
       return false;
    }
};