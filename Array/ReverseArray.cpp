// #include<iostream>
// using namespace std;
// void reverse_array(int arr[], int length){
//     for(int i=length-1; i>=0; i--){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[4] = {1,2,3,4}; 
//     int length = sizeof(arr)/sizeof(arr[0]);

//     reverse_array(arr, length);
//     return 0;
// }



#include<iostream>
using namespace std;
void reverse_array(int arr[], int length){
    int low = 0,  high = length-1;
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
// t.c = o(n)
// a.s = o(1)
}
int main(){
    int arr[4] = {1,2,3,4}; 
    int length = sizeof(arr)/sizeof(arr[0]);

    reverse_array(arr, length);
    for(int i=0; i<length; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}