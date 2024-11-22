#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) { // sort array me se 1st element ke sath ko compare karta hai unsorted element ko min element ke sath
    for (int i = 0; i < n - 1; i++) {
        int smallest = i; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[smallest]) { 
                smallest = j; // Update the smallest index
            }
        }
        // Swap the smallest element with the first element of the unsorted part
        swap(arr[smallest], arr[i]);
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}