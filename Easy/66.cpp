//https://leetcode.com/problems/plus-one/description
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // Start checking from the last digit
        int i = digits.size() - 1;

        // Convert trailing 9s to 0 since adding 1 causes a carry
        while (i >= 0 && digits[i] == 9) {
            digits[i] = 0;
            i--;
        }

        // If all digits were 9 (e.g., 999 -> 1000),
        // insert 1 at the beginning
        if (i < 0) {
            digits.insert(digits.begin(), 1);
        } 
        // Otherwise, increment the first non-9 digit
        else {
            digits[i]++;
        }

        // Return the updated number
        return digits;
    }
};
