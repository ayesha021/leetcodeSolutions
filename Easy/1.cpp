//https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // Loop through each element in the array
        for (int i = 0; i < nums.size(); i++) {

            // Compare the current element with every element after it
            // Starting from i + 1 avoids comparing an element with itself
            // and prevents checking the same pair twice.
            for (int j = i + 1; j < nums.size(); j++) {

                // Check if the sum of the two elements equals the target
                if (nums[i] + nums[j] == target) {

                    // Return the indices of the two numbers
                    return {i, j};
                }
            }
        }

        // Return an empty vector if no valid pair is found
        return {};
    }
};
