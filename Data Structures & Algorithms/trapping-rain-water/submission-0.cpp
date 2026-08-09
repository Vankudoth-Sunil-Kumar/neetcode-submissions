class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int maxleft=0,maxright=0;          
            for(int j=0;j<=i;j++){
                maxleft=max(maxleft,height[j]);
           }
            for(int j=i;j<n;j++){
                maxright=max(maxright,height[j]);
           }
           sum+=min(maxleft,maxright)-height[i];
        }
        return sum;
    }
};
