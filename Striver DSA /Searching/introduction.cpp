// Binary Searching: 
// It is always applicable in sorted area. eg: Dictionary

// arr []= [3,4,6,7,9,12,16,17];
// n=8;
// target =  8;



#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (target > arr[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1; // Return -1 if the target is not found
}

int main() {
    const int n = 8; // Use a constant size
    int arr[n] = {3, 4, 6, 7, 9, 12, 16, 17}; // Correct array initialization
    int target;
    cout << "Enter the target number: ";
    cin >> target;

     int result = BinarySearch(arr, n, target);
    if (result != -1) {
        cout << "Target found at index " << result << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}