class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        int longest = 0;

        for (auto num : st) {
            if (st.count(num - 1) == 0) {
                int count = 1;

                while (st.count(num + 1)) {
                    num++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
        
    }
};