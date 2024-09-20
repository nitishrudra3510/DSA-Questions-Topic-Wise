#include <iostream>
using namespace std;

int lowerBound(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int ans = n;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            high = mid - 1;
            ans = mid;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    // Input size of the array
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Input the array elements
    int arr[n];  // Declaring a raw array
    cout << "Enter the elements of the array in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the value of x
    int x;
    cout << "Enter the value of x: ";
    cin >> x;

    // Call the lowerBound function and print the result
    int result = lowerBound(arr, n, x);
    cout << "The lower bound index is: " << result << endl;

    return 0;
}