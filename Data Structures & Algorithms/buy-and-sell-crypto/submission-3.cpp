class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mn=INT_MAX;
        int mx=INT_MIN;
        int ans=0;
        for(int i=0;i<n;i++){
            int mn=min(prices[i],mn);
            mx=max(prices[i]-mn,mx);
            ans=max(mx,ans);
        }
        return ans;
    }
};
