// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     bool search(vector<int>& nums, int target) {
//         int low = 0;
//         int high = nums.size() - 1;

//         while (low <= high) {
//             int mid = (low + high) / 2; // Calculate the mid index

//             if (nums[mid] == target) {
//                 return true; // Target found
//             }

//             // If duplicates are found at low, mid, and high, shrink the search space
//             if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
//                 low++;  // Move low up
//                 high--; // Move high down
//                 continue; // Continue to next iteration
//             }

//             // Check if the left half is sorted
//             if (nums[low] <= nums[mid]) {
//                 // Target is in the left sorted half
//                 if (nums[low] <= target && target < nums[mid]) {
//                     high = mid - 1; // Search left
//                 } else {
//                     low = mid + 1; // Search right
//                 }
//             } else { // Right half is sorted
//                 // Target is in the right sorted half
//                 if (nums[mid] < target && target <= nums[high]) {
//                     low = mid + 1; // Search right
//                 } else {
//                     high = mid - 1; // Search left
//                 }
//             }
//         }

//         return false; // Target not found
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> nums = {2, 5, 6, 0, 0, 1, 2}; // Example array
//     int target = 0; // Example target

//     // Call the search function
//     bool result = sol.search(nums, target);

//     // Output the result
//     if (result) {
//         cout << "Target " << target << " found in the array." << endl;
//     } else {
//         cout << "Target " << target << " not found in the array." << endl;
//     }

//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2; // Calculate mid to avoid overflow

            if (nums[mid] == target) {
                return mid; // Target found
            }

            // Check if the left half is sorted
            if (nums[low] <= nums[mid]) {
                // Target is in the left sorted half
                if (nums[low] <= target && target <= nums[mid]) {
                    high = mid - 1; // Search left
                } else {
                    low = mid + 1; // Search right
                }
            } else { // Right half is sorted
                // Target is in the right sorted half
                if (nums[mid] < target && target <= nums[high]) {
                    low = mid + 1; // Search right
                } else {
                    high = mid - 1; // Search left
                }
            }
        }

        return -1; // Target not found
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2}; // Example array
    int target = 0; // Example target

    // Call the search function
    int result = sol.search(nums, target);

    // Output the result
    if (result != -1) {
        cout << "Target " << target << " found at index: " << result << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
