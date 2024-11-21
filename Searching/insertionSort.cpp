#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) { 
        int temp = arr[i]; // Current element to be inserted
        int j = i - 1;

        // Corrected for loop to shift elements....
        for (; j >= 0 ; j--) {
            if(arr[j] > temp){
                arr[j + 1] = arr[j]; // Shift larger elements one position to the right
            }
            else{
                break;
            }
        }
        // Insert the current element at its correct position
        arr[j + 1] = temp;
    }
}

int main() {
    int n = 7;
    int arr[7] = {1, 7, 10, 4, 8, 2, 11};

    // Perform insertion sort
    insertionSort(arr, n);

    // Output the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}