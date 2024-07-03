// #include<iostream>
// using namespace std;
// int firstOccurence(int arr[], int n, int x){
//     for(int i=0; i<n; i++){
//         if(arr[i]==x){
//             return i;
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
//     cout<<firstOccurence(arr, n,x);

// }

// time complexity : o(n)
// s.c: o(1)


// using recursion relations;

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int firstOccurrence(int arr[], int low, int high, int x) {
//     if (low > high) return -1;

//     int mid = low + (high - low) / 2; // To prevent potential overflow
//     if (x > arr[mid]) {
//         return firstOccurrence(arr, mid + 1, high, x);
//     } else if (arr[mid] > x) {
//         return firstOccurrence(arr, low, mid - 1, x);
//     } else {
//         if (mid == 0 || arr[mid - 1] != arr[mid]) {
//             return mid;
//         } else {
//             return firstOccurrence(arr, low, mid - 1, x);
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

//     int result = firstOccurrence(arr, low, high, x);
//     if (result != -1) {
//         cout << "Element found at index: " << result << endl;
//     } else {
//         cout << "Element not found" << endl;
//     }

//     return 0;
// }
