// Leaders of the array means: The greatest element of right side,  there should not be any greater elemment to the right side. 

// #include<iostream>
// using namespace std;
// void LeaderArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         int j;
//         for(j=i+1; j<n; j++){
//             if(arr[i]<=arr[j]){
//                 break;
//             }
//         }
//         if(j==n){
//             cout<<arr[i]<<" "
//         }
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     LeaderArray(arr, n);

//     // for(int i=0; i<n; i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     return 0;
// }



// 2nd method solutioms;


// #include<iostream>
// using namespace std;
// void LeaderArray(int arr[], int n){
//     int current_ladddert = arr[n-1];
//     cout<<current_ladddert;

//     for(int i=n-2; i>=0; i--){
//         if(current_ladddert<arr[i]){
//             current_ladddert = arr[i];
//             cout<<current_ladddert<<" ";
//         }

        
//     }

// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     LeaderArray(arr, n);

//     // for(int i=0; i<n; i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     return 0;
// }



//





// 3rd methods;
#include<iostream>
using namespace std;

void LeaderArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = i + 1; j < n; j++){
            if(arr[i] <= arr[j]){
                flag = true;
                break;
            }
        }
        if(!flag) {
            cout << arr[i] << " ";
        }
    }
    cout << endl; // To ensure a newline after printing all leaders
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

    cout << "Leaders in the array are: ";
    LeaderArray(arr, n);

    return 0;
}
