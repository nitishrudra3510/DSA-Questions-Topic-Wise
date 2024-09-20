#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // Sort the array first
        sort(arr.begin(), arr.end());

        // Initialize floor and ceil values
        int floor = -1;
        int ceil = -1;

        // Iterate over the array to find the floor and ceiling
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= x) {
                // Update floor if current element is less than or equal to x
                floor = arr[i];
            }
            if (arr[i] >= x) {
                // Update ceil if current element is greater than or equal to x
                ceil = arr[i];
                break; // No need to check further since the array is sorted
            }
        }

        // Return the floor and ceil as a vector
        return {floor, ceil};
    }
};

int main() {
    Solution sol;

    // Example: Take input from the user
    int n, x;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value of x: ";
    cin >> x;

    // Call the getFloorAndCeil function
    vector<int> result = sol.getFloorAndCeil(x, arr);

    // Output the results
    cout << "Floor of " << x << " is: " << result[0] << endl;
    cout << "Ceiling of " << x << " is: " << result[1] << endl;

    return 0;
}