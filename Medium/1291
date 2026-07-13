class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        // Vector to store all valid sequential digit numbers
        vector<int> ans;

        // String containing digits from 1 to 9
        // We'll generate numbers by taking substrings of this string.
        string digits = "123456789";

        // Try all possible lengths of sequential numbers (2 to 9 digits)
        for (int len = 2; len <= 9; len++) {

            // Generate every substring of the current length
            for (int start = 0; start + len <= 9; start++) {

                // Convert the substring into an integer
                int num = stoi(digits.substr(start, len));

                // Store the number if it lies within the given range
                if (num >= low && num <= high)
                    ans.push_back(num);
            }
        }

        // Return all sequential digit numbers in increasing order
        return ans;
    }
};
