// #include<iostream>
// using namespace std;
// bool issorted(int arr[], int n){
//     for(int i=0; i<n; i++){
//         if(arr[i]<arr[i-1]){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     if(issorted(arr, n)){
//         cout<<"Array are sorted";
//     }else{
//         cout<<"Array are not sorted";
//     }
// }


// deletion of an element from an array
// #include<iostream>
// using namespace std;

// int deletion(int arr[], int size, int x) {
//     int i;
    
//     // Find the index of the element to be deleted
//     for (i = 0; i < size; i++) {
//         if (arr[i] == x) {
//             break;
//         }
//     }
    
//     // If the element is not found, return the original size
//     if (i == size) {
//         return size;
//     }

//     // Shift elements to the left to overwrite the deleted element
//     for (int j = i; j < size - 1; j++) {
//         arr[j] = arr[j + 1];
//     }

//     // Return the new size of the array after deletion
//     return size - 1;
// }

// int main() {
//     int arr[] = {0, 1, 2, 3, 4};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int x;
    
//     // Input the element to delete
//     cout << "Enter the element to delete: ";
//     cin >> x;
    
//     // Perform deletion and get the new size
//     int newSize = deletion(arr, size, x);
    
//     // Print the new array
//     cout << "New array: ";
//     for (int i = 0; i < newSize; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
//     return 0;
// }

// time complexicity:

// Insert : O(n)
// search: O(n) for unsorted
//          O(log n) for sorted
//delete: O(n);

// Get i-th Element : O(1)
// Update i-th Element : O(1)

// Note: insert at the end and delete from the end can be done in o(1) time.





// largest element in an array:
// #include<iostream>
// using namespace std;
// int getLargestElement(int arr[], int size){
//     int res = 0;
//     for(int i=1; i<size; i++){
//         if(arr[i]>arr[i-1]){
//             res=i;
//         }
//     }
//     return arr[res];
// }
// int main(){
//     int arr[]={4, 5, 20,15};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<getLargestElement(arr, size);
//     return 0;
// }

// best approaches: o(n)



// second largest element in an array
#include<iostream>
using namespace std;
int getLargestElement(int arr[], int size){
    int largest = 0;
    for(int i=1; i<size; i++){
        if(arr[i]>arr[largest]){
            largest = i;
        }
    }
    return largest;
}

int secondLargestElement(int arr[], int size){
    int largest = getLargestElement(arr, size);
    int res = -1;
    for(int i=0; i<size; i++){
        if(arr[i]!=arr[largest]){
            if(res==-1){
                res=i;
            }else if(arr[i]>arr[res]){
                res=i;
            }
        }
    }

    return res;
}
int main(){
    int arr[]={5, 7, 4, 10, 40, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    int secondindex = secondLargestElement(arr, size);
    if(secondindex!=-1){
        cout<<"Second largest element "<<arr[secondindex]<<endl;
    }
    else{
        cout<<"not second largest element";
    }
    return 0;
}