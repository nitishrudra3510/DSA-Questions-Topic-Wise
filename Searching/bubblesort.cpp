#include<iostream>
#include <utility>
using namespace std;

void bubbleSort(int arr[], int n){ // repeadtly swap two adjacent element they are in wrong order.
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i+1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";;
    }
    cout<<endl;
}

int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted Array: ";
    printArray(arr, n);
}