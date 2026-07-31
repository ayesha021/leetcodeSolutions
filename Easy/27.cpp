//https://leetcode.com/problems/remove-element/description/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // k points to the index where the next valid element should be placed.
        int k = 0;

        // i scans every element in the array.
        for (int i = 0; i < nums.size(); i++) {

            // Keep only elements that are NOT equal to val.
            if (nums[i] != val) {

                // Copy the current valid element to the front of the array.
                nums[k] = nums[i];

                // Move k to the next available position.
                k++;
            }

            // If nums[i] == val, do nothing.
            // i moves on automatically, while k stays in place,
            // waiting for the next valid element.
        }

        // The first k elements now contain all valid elements.
        return k;
    }
};
