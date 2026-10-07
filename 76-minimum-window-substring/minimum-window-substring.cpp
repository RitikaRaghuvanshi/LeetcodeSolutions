class Solution {
public:
    string minWindow(string s, string t) {
                vector<int> freq(128, 0);

        // Store frequency of every character in t
        for (int i = 0; i < t.size(); i++) {
            freq[t[i]]++;
        }

        int left = 0;
        int count = 0;

        // Minimum window information
        int minLen = INT_MAX;
        int start = 0;

        // Move right pointer
        for (int right = 0; right < s.size(); right++) {

            // Current character
            char ch = s[right];

            // If this character is still needed
            if (freq[ch] > 0) {
                count++;
            }

            // Add character to window
            freq[ch]--;

            // If we have all characters of t
            while (count == t.size()) {

                // Current window length
                int windowLen = right - left + 1;

                // Check if current window is smaller
                if (windowLen < minLen) {
                    minLen = windowLen;
                    start = left;
                }

                // Character that we are removing
                char leftChar = s[left];

                // Remove it from window
                freq[leftChar]++;

                // If freq becomes positive,
                // we removed a required character
                if (freq[leftChar] > 0) {
                    count--;
                }

                // Move left pointer
                left++;
            }
        }

        // No valid window found
        if (minLen == INT_MAX) {
            return "";
        }

        // Return minimum window
        return s.substr(start, minLen);

        
    }
};