// #include <iostream>
// using namespace std;

// int LastOccurrence(int arr[], int low, int high, int x, int n) {
//     if (low > high) return -1;

//     int mid = low + (high - low) / 2; // To prevent potential overflow
//     if (arr[mid] > x) {
//         return LastOccurrence(arr, low, mid - 1, x, n);
//     } else if (arr[mid] < x) {
//         return LastOccurrence(arr, mid + 1, high, x, n);
//     } else {
//         if (mid == n - 1 || arr[mid + 1] != x) {
//             return mid;
//         } else {
//             return LastOccurrence(arr, mid + 1, high, x, n);
//         }
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int x;
//     cin >> x;

//     int low = 0;
//     int high = n - 1;

//     int result = LastOccurrence(arr, low, high, x, n);
//     if (result != -1) {
//         cout << "Element found at index: " << result << endl;
//     } else {
//         cout << "Element not found" << endl;
//     }

//     return 0;
// }



// iterative solutions:

#include <iostream>
using namespace std;

int LastOccurrence(int arr[], int low, int high, int x, int n) {

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<x){
            low = mid+1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }

        else{
            if(mid==n-1 || arr[mid]!=arr[mid+1]){
                return mid;
            }
            else{
                low =  mid+1;
            }
        }
    }
    return -1;

    
}
 
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    int low = 0;
    int high = n - 1;

    int result = LastOccurrence(arr, low, high, x, n);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}

