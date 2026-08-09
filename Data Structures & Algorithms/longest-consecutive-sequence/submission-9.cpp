class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int mx=0;
        unordered_set<int>s(nums.begin(),nums.end());
        for(auto x:s){
            if(s.find(x-1)==s.end()){
            int curr=x;
             int cnt=1;
            while(s.find(curr+1)!=s.end()){
                cnt++;
                curr++;
            }
            mx=max(mx,cnt);
            }
        }
        return mx;
    }
};
