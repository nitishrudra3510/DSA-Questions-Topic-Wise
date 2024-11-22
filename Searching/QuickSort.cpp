#include <iostream>
#include <utility>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void Quic_sort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        Quic_sort(arr, low, pivotIndex - 1);
        Quic_sort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int n = 7;
    int arr[7] = {4, 5, 7, 1, 8, 9, 2};

    Quic_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}