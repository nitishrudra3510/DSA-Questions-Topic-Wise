#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to find the first element greater than target
    int upperbound(vector<int>& nums, int target){
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int ans = n;  // Default answer is n (no element greater than target)
    
        while (low <= high) {
            int mid = (low + high) / 2;
        
            // If nums[mid] is greater than target, update the answer and search left
            if (nums[mid] > target) {
                ans = mid;
                high = mid - 1;
            }
            // If nums[mid] is less than or equal to target, search right
            else {
                low = mid + 1;
            }
        }
        return ans;
    }

    // Function to find the first element greater than or equal to target
    int leastBound(vector<int>& nums, int target){
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int ans = n;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] >= target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    // Function to find the range of target in the array
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        // Find the least bound (first occurrence)
        int lb = leastBound(nums, target);

        // If the element at least bound index is not target, return {-1, -1}
        if (lb == n || nums[lb] != target) {
            return {-1, -1};
        }

        // Find the upper bound (one index past the last occurrence)
        int ub = upperbound(nums, target) - 1;

        return {lb, ub};
    }
};

int main() {
    Solution solution;

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 7, 8, 9};
    int target = 7;

    vector<int> result = solution.searchRange(nums, target);
    cout << "Range: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
