class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();

        int pos = lower_bound(arr.begin(), arr.end(), x) - arr.begin();

        int l = pos - 1;
        int r = pos;

        vector<int> ans;

        while(k--) {
            if(l < 0)
                ans.push_back(arr[r++]);

            else if(r >= n)
                ans.push_back(arr[l--]);

            else if(x - arr[l] <= arr[r] - x)
                ans.push_back(arr[l--]);

            else
                ans.push_back(arr[r++]);
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};