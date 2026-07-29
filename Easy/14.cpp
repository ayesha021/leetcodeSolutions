//https://leetcode.com/problems/longest-common-prefix/description/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // If the input array is empty, there is no common prefix
        if (strs.empty()) return "";

        // Use the first string as the reference
        // Check each character in the first string
        for (int i = 0; i < strs[0].size(); i++) {
            char c = strs[0][i];

            // Compare this character with the character
            // at the same position in every other string
            for (int j = 1; j < strs.size(); j++) {

                // If we've reached the end of another string,
                // or the characters don't match,
                // we've found the end of the common prefix
                if (i >= strs[j].size() || strs[j][i] != c) {
                    // Return everything before the mismatch
                    return strs[0].substr(0, i);
                }
            }
        }

        // If we never found a mismatch,
        // the entire first string is the common prefix
        return strs[0];
    }
};
