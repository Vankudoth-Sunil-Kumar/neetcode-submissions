class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n=nums.size();
       int cnt=0;
       int pro=1;
       vector<int>ans=nums;
       for(int i=0;i<n;i++){
        if(nums[i]==0) cnt++;
        if(nums[i]!=0) pro*=nums[i];
       }
       vector<int>fah;
       for(int i=0;i<n;i++){
        if(cnt>0){
            if(cnt==1){
            if(ans[i]!=0) ans[i]=0;
            else  ans[i]=pro;
            }
            else{
                ans[i]=0;
            }
        }
        else{
            fah.push_back(pro/ans[i]);
        }
       }
       if(cnt>0) return ans;
       else return fah;
    }
};
