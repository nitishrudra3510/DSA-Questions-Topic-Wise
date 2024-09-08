// // brute force
// #include<iostream>
// using namespace std;

// // Function to find the largest element in the array
// int largest_arr(int arr[], int n) {
//     int largest = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }
//     return largest;
// }

// // Function to find the second largest element in the array
// int secondLargest(int arr[], int n) {
//     int largest = largest_arr(arr, n);
//     int second_lar = -1;

//     // Find the second largest distinct element
//     for (int i = 0; i < n; i++) {
//         if (arr[i] != largest) {
//             if (arr[i]>second_lar && arr[i] != largest) {
//                 second_lar = arr[i];
//             }
//         }
//     }
    
//     return second_lar;
// }

// int main() {
//     int arr[] = {1, 2, 4, 7, 7, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int largest = largest_arr(arr, n);
//     int second_largest = secondLargest(arr, n);

//     cout << "Largest element: " << largest << endl;
//     cout << "Second largest element: " << second_largest << endl;

//     return 0;
// }


// // second_largets 
// #include<iostream>
// using namespace std;
// int secondLargest(int arr[], int n){
//     int largest = arr[0];
//     int second = -1;
//     for(int i = 1; i <n; i++){
//         if(arr[i] > largest){
//             second = largest; // update second element
//             largest = arr[i]; // update largest element
//         }
//         else if(arr[i] < largest && arr[i] > second){
//             second = arr[i]; // update second element
//         }
//     }
//     return second;
// }
// int main(){
//     int arr[] = {1, 2, 4, 7, 7, 5,6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout<<"Second largest element : "<<secondLargest(arr, n);
//     return 0;
// }



// seecong largets and and secong smallest elements

// second_largets 
#include<iostream>
#include<algorithm>
using namespace std;
int secondLargest(int arr[], int n){
    int largest = arr[0];
    int second = -1;
    for(int i = 1; i <n; i++){
        if(arr[i] > largest){
            second = largest; // update second element
            largest = arr[i]; // update largest element
        }
        else if(arr[i] < largest && arr[i] > second){
            second = arr[i]; // update second element
        }
    }
    return second;
}

int secondSmallest(int arr[], int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;

    for(int i = 1; i <n; i++){
        if(arr[i] < smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < ssmallest && arr[i] != smallest){
            ssmallest = arr[i];
        }
    }

    return ssmallest;
}
int main(){
    int arr[] = {1, 2, 4, 7, 7, 5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Second largest element : "<<secondLargest(arr, n)<<endl;
    cout<<"Second smallest element : "<<secondSmallest(arr, n);
    return 0;
}