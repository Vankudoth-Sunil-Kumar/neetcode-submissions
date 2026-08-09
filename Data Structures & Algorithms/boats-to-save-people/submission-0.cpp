class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int l=0;
        int n=people.size();
        int r=n-1;
        sort(people.begin(),people.end());
        int ans=0;
        while(l<=r){
            if(people[l]+people[r]<=limit){
                ans++;
                l++;
                r--;
            }
            else {
                r--;
                ans++;
            }
        }
        return ans;
    }
};