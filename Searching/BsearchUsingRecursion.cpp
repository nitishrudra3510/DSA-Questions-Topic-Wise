// // Sorted array:
// #include<iostream>
// using namespace std;
// int BsearchRecursion(int arr[], int start, int high, int x){
//     if(start > high){
//         return -1;
//     }
//     int mid = (start+high)/2;
//     if(arr[mid]==x){
//         return mid;
//     }
//     else if(arr[mid]>x){
//         return BsearchRecursion(arr, start, mid-1,x);
//     }
//     else{
//         return BsearchRecursion(arr, start,mid+1,x);
//     }
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
//     int start = 0;
//     int high = n - 1;

//     int result = BsearchRecursion(arr, start, high, x);
//     if (result != -1) {
//         cout << "Element found at index: " << result << endl;
//     } else {
//         cout << "Element not found" << endl;
//     }

//     return 0;
// }






// unsorted array:

// Sorted array:
#include<iostream>
#include<algorithm>
using namespace std;
int BsearchRecursion(int arr[], int start, int high, int x){
    if(start>high){
        return -1;
    }
    int mid = (start+high)/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]>x){
        return BsearchRecursion(arr, start, mid-1,x);
    }
    else{
        return BsearchRecursion(arr, mid+1,high, x);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cin>>x;

    // sort the array
    sort(arr, arr+n);
    int start = 0;
    int high = n - 1;

    int result = BsearchRecursion(arr, start, high, x);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}