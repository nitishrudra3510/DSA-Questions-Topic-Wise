#include <iostream>
#include <utility>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i;
    int leftIndex = 2 * i + 1;
    int rightIndex = 2 * i + 2;

    if (leftIndex < n && arr[leftIndex] > arr[largest]) {
        largest = leftIndex;
    }

    if (rightIndex < n && arr[rightIndex] > arr[largest]) {
        largest = rightIndex;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

int heapSort(int arr[], int n){
    int size = n;
    while(size > 1){
        //step 1 : swap
        swap(arr[size], arr[1]);
        size--;

        // heapify ; 
        heapify(arr, n, 1);
    }
}
int main() {
    int arr[] = {4, 10, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}