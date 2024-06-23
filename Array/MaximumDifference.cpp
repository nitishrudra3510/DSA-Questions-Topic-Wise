// Maximum value of array arr[j]- arr[i] such that j>i;

// #include<iostream>
// using namespace std;
// int MaximumDifference(int arr[], int n){
//     int res = arr[1] - arr[0];
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             res = max(res, arr[i]-arr[j]);
//         }

//         return res;
//     }
// }
// int main(){
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " elements: ";
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     cout << "Max Difference of the array are: ";
//     cout<< MaximumDifference(arr, n);
//     return 0;
// }










// 2nd method solutions;

#include<iostream>
using namespace std;

int MaximumDifference(int arr[], int n){
    int res = arr[1]-arr[0]; 
    int minValue = arr[0];
    for(int j=1; j<n; j++){
        res = max(res,arr[j]-minValue);
        minValue = min(minValue,arr[j]);
    }
    return res;
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Max Difference of the array are: ";
    cout<< MaximumDifference(arr, n);
    return 0;
}