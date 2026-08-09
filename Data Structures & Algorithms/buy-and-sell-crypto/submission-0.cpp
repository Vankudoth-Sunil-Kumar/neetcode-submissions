class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maax=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
               maax=max(maax,prices[j]-prices[i]);
            }
        }
   return maax;
    }
};
