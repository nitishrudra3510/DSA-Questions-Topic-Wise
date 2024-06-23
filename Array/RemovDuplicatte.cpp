// #include<iostream>
// using namespace std;
// int RemoveDuplicate(int arr[], int n){
//     if(n==1 || n==0){
//         return n;
//     }
//     int res = 1;
//     for(int i=1; i<n; i++){
//         if(arr[i]!=arr[res-1]){
//             arr[res] = arr[i];
//             res++;
//         }
//     }

//     return res;
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int size = RemoveDuplicate(arr, n);
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// void RemoveDuplicate(int arr[], int n){
//     if(n==1 || n==0){
//         return;
//     }
//     int res = 1;
//     for(int i=1; i<n; i++){
//         if(arr[i]!=arr[res-1]){
//             arr[res] = arr[i];
//             res++;
//         }
//     }
//     // // Print the unique elements directly without returning new size
//     for(int i=0; i<res; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     RemoveDuplicate(arr, n);
    
//     return 0;
// }









// #include<iostream>
// using namespace std;
// void RemoveDuplicate(int arr[], int n){
//     if(n==1 || n==0){
//         return;
//     }
//     int res = 1;
//     for(int i=1; i<n; i++){
//         if(arr[i]!=arr[res-1]){
//             arr[res] = arr[i];
//             res++;
//         }
//     }
//     // // Print the unique elements directly without returning new size
//     for(int i=0; i<res; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     RemoveDuplicate(arr, n);

//     return 0;
// }









#include<iostream>
using namespace std;
int RemoveDuplicate(int arr[], int n){
    int temp[n];
    temp[0] = arr[0];
    int res = 1;
    for(int i=0; i<n; i++){
        if(arr[i]!=arr[res-1]){
            temp[res] = arr[i];
            res++;
        }
    }


    for(int i=0; i<res; i++){
        arr[i] = temp[i];
    }
    return res;

    
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int size=RemoveDuplicate(arr, n);
    
    for(int i=0;i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}





