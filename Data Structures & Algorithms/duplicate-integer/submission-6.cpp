#include<bits/stdc++.h>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       // bool ok=false;
        int n=nums.size();
        set<int>s;
        for(int x:nums) s.insert(x);
        if(s.size()==n) return false;
        return true;
    }
};