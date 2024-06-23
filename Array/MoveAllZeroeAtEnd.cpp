// #include<iostream>
// using namespace std;

// void MoveZeroes(int arr[], int n){
//     for(int i=0; i<n; i++){
//         if(arr[i]==0){
//             for(int j=i+1; j<n; j++){
//                 if(arr[j]!=0){
//                     swap(arr[i], arr[j]);
//                     // arr[j]=arr[j-1];
//                     // arr[j-1]=arr[j];
//                 }                
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

//     MoveZeroes(arr, n);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }





// efficient way!!


#include<iostream>
using namespace std;

void MoveZeroes(int arr[], int n){
    int res = 0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[res]);
            res++;
        }
    }

}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    MoveZeroes(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}