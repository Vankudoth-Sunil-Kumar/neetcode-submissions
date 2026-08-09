#include<bits/stdc++.h>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
     unordered_map<int,int>s;
     for(int x:nums){
        s[x]++;
        if(s[x]>1) return true;
     }
    return false;
    }
};