#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;  // To store the index of the first zero

        // Find the first zero in the array
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                j = i;  // Store the index of the first zero
                break;
            }
        }

        // If no zero is found, return early
        if (j == -1) {
            return;
        }

        // Iterate over the array and swap non-zero elements with the zeroes
        for (int i = j + 1; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]); // Swap non-zero element with zero
                j++;  // Move j to the next zero position
            }
        }
    }
};

// Function to print the elements of a vector
void printVector(const vector<int>& nums) {
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    Solution solution;
    vector<int> nums = {0, 1, 0, 3, 12};  // Example input

    cout << "Original array: ";
    printVector(nums);

    solution.moveZeroes(nums);  // Call the moveZeroes function

    cout << "Array after moving zeros: ";
    printVector(nums);

    return 0;
}
