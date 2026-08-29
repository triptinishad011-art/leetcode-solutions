class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int ans = 0;
        
        unordered_set<char> st;

        for (int right = 0; right < s.length(); right++) {
            
            // If character already exists, remove from left
            while (st.count(s[right])) {
                st.erase(s[left]);
                left++;
            }

            // Add current character
            st.insert(s[right]);

            // Update maximum length
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};