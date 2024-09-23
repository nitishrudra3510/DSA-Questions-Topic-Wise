#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) {
            return nums.size();  // If array size is <= 2, no need to modify it
        }

        int j = 2;  // Start from index 2 since the first two elements are always allowed

        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] != nums[j - 2]) {  // Only allow new element if it's different from nums[j-2]
                nums[j] = nums[i];  // Replace the element at index j
                j++;  // Move j forward to indicate a valid unique element
            }
        }

        return j;  // Return the new length of the array with duplicates removed
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 1, 1, 2, 2, 3};  // Example input

    int newLength = solution.removeDuplicates(nums);  // Call the function

    cout << "New length of the array: " << newLength << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";  // Print the modified array
    }
    cout << endl;

    return 0;
}
