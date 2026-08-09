class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        int sum=1,x=1;
        int z=0;
        for(int i=0;i<n;i++){
            sum=sum*nums[i];
            if(nums[i]!=0){
                x=x*nums[i];
            }
            else z++;
        }
        if(z>1) {
         for(int i=0;i<n;i++){      
            ans.push_back(0);
          }
        }
        else {
            for(int i=0;i<n;i++){
                if(nums[i]==0){ans.push_back(x);}
                else
                ans.push_back(sum/nums[i]);
         }
        }
        return ans;
    }
};
