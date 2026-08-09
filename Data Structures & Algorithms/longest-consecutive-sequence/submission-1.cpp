class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int maax=0,count=1;;
        if(nums.empty()) return 0;
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]) continue;
            if(nums[i]==nums[i-1]+1) count++;
            else{
             maax=max(maax,count);
             count=1;
                }
            }
        return max(maax,count);
    }
};
