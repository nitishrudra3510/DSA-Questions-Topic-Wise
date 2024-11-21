

// #include<iostream>
// using namespace std;
// int bsearch(int arr[], int n, int x){
//     int low = 0;
//     int high = n-1;
//     while(low<=high){
//         int mid = (low+high)/2;
//         if(arr[mid]==x){
//             return mid;
//         }
//         else if(arr[mid]>x){
//             return mid-1;
//         }

//         else{
//             return mid+1;
//         }
//     }
//     return -1;
    
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int x;
//     cin>>x;

//     sort(arr, arr+n);
//     cout<<bsearch(arr,n,x);
// }


#include <iostream>
#include <algorithm> // For std::sort
using namespace std;

int bsearch(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x) {
            return mid; // Element found
        } else if (arr[mid] > x) {
            high = mid - 1; // Narrow the search range to the left
        } else {
            low = mid + 1; // Narrow the search range to the right
        }
    }

    return -1; // Element not found
}

int main() {
    int n = 5;
    int arr[] = {4, 3, 5, 1, 6};
    int x = 1;

    // Step 1: Sort the array
    sort(arr, arr + n);

    // Output the sorted array (optional for debugging)
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Step 2: Perform binary search
    int result = bsearch(arr, n, x);

    // Step 3: Output the result
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}