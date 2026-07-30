//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        // If the array is empty, there are no unique elements.
        if (nums.empty())
            return 0;

        // k points to the next position where a new unique element
        // should be placed.
        // nums[0] is always unique, so start k at 1.
        int k = 1;

        // Start from the second element because we compare
        // each element with the one before it.
        for (int i = 1; i < nums.size(); i++) {

            // If the current element is different from the previous one,
            // we've found a new unique element.
            if (nums[i] != nums[i - 1]) {

                // Copy the unique element to the next available position.
                nums[k] = nums[i];

                // Move k to the next position for the next unique element.
                k++;
            }
        }

        // k is the number of unique elements.
        return k;
    }
};
