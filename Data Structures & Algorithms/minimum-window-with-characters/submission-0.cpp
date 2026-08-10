class Solution {
public:
    string minWindow(string s, string t) {

        if (t.size() > s.size())
            return "";

        unordered_map<char, int> need;
        unordered_map<char, int> window;

        // Frequency of characters required from t
        for (char c : t) {
            need[c]++;
        }

        int required = need.size();
        int formed = 0;

        int left = 0;
        int minLen = INT_MAX;
        int start = 0;

        for (int right = 0; right < s.size(); right++) {

            char c = s[right];
            window[c]++;

            // This character has now satisfied its required frequency
            if (need.count(c) && window[c] == need[c]) {
                formed++;
            }

            // Window is valid
            while (formed == required) {

                // Update answer
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                char leftChar = s[left];
                window[leftChar]--;

                // Window becomes invalid
                if (need.count(leftChar) &&
                    window[leftChar] < need[leftChar]) {
                    formed--;
                }

                left++;
            }
        }

        if (minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};