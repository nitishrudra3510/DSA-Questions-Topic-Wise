#include<iostream>
using namespace std;
bool issorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    if(issorted(arr, n)){
        cout<<"Arrays are sorted"<<endl;
    }

    else{
        cout<<"Arrays are not sorted"<<endl;
    }
}






// #include<iostream>
// using namespace std;
// void issorted(int arr[], int n){
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1]=temp;
//             }
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

//     issorted(arr, n);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }





