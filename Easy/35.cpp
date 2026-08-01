//https://leetcode.com/problems/search-insert-position/description
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // Initialize the search range.
        int left = 0;
        int right = nums.size() - 1;

        // Continue searching while the range is valid.
        while (left <= right) {
            // Find the middle index.
            // This avoids potential integer overflow.
            int mid = left + (right - left) / 2;

            // If the target is found, return its index.
            if (nums[mid] == target)
                return mid;

            // If the target is greater than the middle element,
            // search in the right half.
            else if (nums[mid] < target)
                left = mid + 1;

            // Otherwise, search in the left half.
            else
                right = mid - 1;
        }

        // If the target is not found, 'left' is the correct
        // insertion position to keep the array sorted.
        return left;
    }
};
