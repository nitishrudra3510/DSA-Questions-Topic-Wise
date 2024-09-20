#include <iostream>
#include <vector>
using namespace std;

int upperBound(vector<int> &arr, int x, int n) {
    int low = 0;
    int high = n - 1;
    int ans = n;  // Default answer is n (no element greater than x)
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        // If arr[mid] is greater than x, update the answer and search left
        if (arr[mid] > x) {
            ans = mid;
            high = mid - 1;
        }
        // If arr[mid] is less than or equal to x, search right
        else {
            low = mid + 1;
        }
    }
    
    return ans;
}

int main() {
    // Example usage:
    int n, x;
    
    cout << "Enter the size of the array: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the sorted elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the value of x: ";
    cin >> x;
    
    // Get the upper bound index
    int index = upperBound(arr, x, n);
    
    // Output result
    if (index == n) {
        cout << "No element is strictly greater than " << x << endl;
    } else {
        cout << "The smallest element greater than " << x << " is at index " << index << " and the element is " << arr[index] << endl;
    }
    
    return 0;
}