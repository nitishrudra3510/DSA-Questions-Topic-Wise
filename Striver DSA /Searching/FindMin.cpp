#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0; 
        int high = nums.size() - 1; // Fix: Should be nums.size() - 1 to get the last index
        
        while (low < high) { // The condition should be low < high to avoid infinite loop
            int mid = low + (high - low) / 2; // Calculate the mid index to avoid overflow

            // Check if the left part is unsorted (minimum must be in the right half)
            if (nums[mid] > nums[high]) {
                low = mid + 1; // Minimum must be in the right half
            }
            // Otherwise, the minimum is in the left half or at mid
            else {
                high = mid; // Minimum could be at mid or in the left half
            }
        }
        
        return nums[low]; // Return the minimum element
    }
};

int main() {
    Solution solution;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};  // Example input: rotated sorted array

    int minElement = solution.findMin(nums);  // Call the function to find the minimum element

    cout << "Minimum element in the rotated sorted array: " << minElement << endl;

    return 0;
}
