class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int maax=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                maax=max(maax,(min(heights[i],heights[j])*(j-i)));
            }
        }
        return maax;
    }
};
