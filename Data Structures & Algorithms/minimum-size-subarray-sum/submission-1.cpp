class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int ans=n;
        int sum=0;
        bool ok=false;
        for(int i=0;i<n;i++){
            if(sum<target) sum+=nums[i];
            while(sum>=target){
                ans=min(ans,i-l+1);
                sum-=nums[l];
                l++;
                ok=true;
            }
        }
        if(!ok) return 0;
        else
        return ans;
    }
};