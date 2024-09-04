// #include<iostream>
// using namespace std;
// bool issorted(int arr[], int n){
//     for(int i=0; i<n; i++){
//         if(arr[i]<arr[i-1]){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     if(issorted(arr, n)){
//         cout<<"Array are sorted";
//     }else{
//         cout<<"Array are not sorted";
//     }
// }


// deletion of an element from an array
// #include<iostream>
// using namespace std;

// int deletion(int arr[], int size, int x) {
//     int i;
    
//     // Find the index of the element to be deleted
//     for (i = 0; i < size; i++) {
//         if (arr[i] == x) {
//             break;
//         }
//     }
    
//     // If the element is not found, return the original size
//     if (i == size) {
//         return size;
//     }

//     // Shift elements to the left to overwrite the deleted element
//     for (int j = i; j < size - 1; j++) {
//         arr[j] = arr[j + 1];
//     }

//     // Return the new size of the array after deletion
//     return size - 1;
// }

// int main() {
//     int arr[] = {0, 1, 2, 3, 4};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int x;
    
//     // Input the element to delete
//     cout << "Enter the element to delete: ";
//     cin >> x;
    
//     // Perform deletion and get the new size
//     int newSize = deletion(arr, size, x);
    
//     // Print the new array
//     cout << "New array: ";
//     for (int i = 0; i < newSize; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
//     return 0;
// }

// time complexicity:

// Insert : O(n)
// search: O(n) for unsorted
//          O(log n) for sorted
//delete: O(n);

// Get i-th Element : O(1)
// Update i-th Element : O(1)

// Note: insert at the end and delete from the end can be done in o(1) time.





// largest element in an array:
// #include<iostream>
// using namespace std;
// int getLargestElement(int arr[], int size){
//     int res = 0;
//     for(int i=1; i<size; i++){
//         if(arr[i]>arr[i-1]){
//             res=i;
//         }
//     }
//     return arr[res];
// }
// int main(){
//     int arr[]={4, 5, 20,15};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<getLargestElement(arr, size);
//     return 0;
// }

// best approaches: o(n)



// second largest element in an array

// #include<iostream>
// using namespace std;
// int getLargestElement(int arr[], int size){
//     int largest = 0;
//     for(int i=1; i<size; i++){
//         if(arr[i]>arr[largest]){
//             largest = i;
//         }
//     }
//     return largest;
// }

// int secondLargestElement(int arr[], int size){
//     int largest = getLargestElement(arr, size);
//     int res = -1;
//     for(int i=0; i<size; i++){
//         if(arr[i]!=arr[largest]){
//             if(res==-1){
//                 res=i;
//             }else if(arr[i]>arr[res]){
//                 res=i;
//             }
//         }
//     }

//     return res;
// }
// int main(){
//     int arr[]={5, 7, 4, 10, 40, 20};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int secondindex = secondLargestElement(arr, size);
//     if(secondindex!=-1){
//         cout<<"Second largest element "<<arr[secondindex]<<endl;
//     }
//     else{
//         cout<<"not second largest element";
//     }
//     return 0;
// }


// array is sorted or not;
// #include<iostream>
// using namespace std;
// bool isSorted(int arr[], int size){
//     for(int i=0; i<size; i++){
//         for(int j=i+1; j<size; j++){
//             if(arr[j]<arr[i]){
//                 return false;
//             }
//         }
        
//     }
//     return true;
// }
// int main(){
//     int arr[] = {4, 7, 4, 10, 40, 20};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     if(isSorted(arr, size)){
//         cout<<"Sorted"<<endl;
//     }else{
//         cout<<"un Sorted"<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// bool isSorted(int arr[], int size){
//     for(int i=1; i<size; i++){
//         if(arr[i]<arr[i-1]){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int arr[] = {4, 7,  10, 40, 200};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     if(isSorted(arr, size)){
//         cout<<"Sorted"<<endl;
//     }else{
//         cout<<"un Sorted"<<endl;
//     }
// }


// reverse an array:

// #include<iostream>
// using namespace std;

// void reverse(int arr[], int size){
//     int low = 0, high = size - 1;
//     while(low < high){
//         int temp = arr[low];
//         arr[low] = arr[high];
//         arr[high] = temp;
//         low++;
//         high--;
//     }
// }

// int main(){
//     int arr[] = {4, 7, 10, 40, 200};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     // Reverse the array
//     reverse(arr, size);

//     // Print the reversed array
//     cout << "Reversed array: ";
//     for(int i = 0; i < size; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// time complexicity: 0(n)
// auxiliary space: 0(n)



// remove duplicate from a sorted array

// #include<iostream>
// using namespace std;
// int DuplicateArray(int arr[], int size){
//     int temp[size]; 
//     temp[0] = arr[0];
//     int res = 0;
//         for(int i = 1; i < size; i++){
//             if(arr[i]!=arr[res]){
//             temp[res+1] = arr[i];
//             res++;
//             }
//         }
//         for(int i = 1; i < size; i++){
//             arr[i] = temp[i];
//         }
//         return res;
//     }
    
// int main(){
//     int arr[] = {10, 20, 20, 30, 30, 30, 30};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout<<DuplicateArray(arr, size);
//     return 0;
// }





// #include<iostream>
// using namespace std;
// int DuplicateArray(int arr[], int size){
//     int res = 1;
//     for(int i = 0; i < size; i++){
//         if(arr[i]!=arr[res-1]){
//             arr[res] = arr[i];
//             res++;
//         }

//     }
//     return res;
// }
// int main(){
//     int arr[] = {10, 20, 20, 30, 30, 30, 30};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int n = DuplicateArray(arr, size);
//     cout << "New array size after removing duplicates: " << n << endl;
//     for(int i = 0; i < n; i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }


// left rotate an array by one
// arr[] = {1,2,3,4,5,6,7,8,9,10,11}

// #include<iostream>
// using namespace std;
// void LRotate(int arr[], int size){
//     int temp = arr[0];
//     for(int i = 0; i < size-1; i++){
//         arr[i]=arr[i+1];
//     }

//     arr[size-1]=temp;
    
    
// }
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     LRotate(arr, size);
//     cout<<"Left Rotate array by One : "<<endl;
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// time complexity = Theta(N)
// Auxiliary Space: Theta(1)



// left rotation an array by d position;

// #include<iostream>
// using namespace std;
// void LRotateOne(int arr[], int size){
//     int temp = arr[0];
//     for(int i = 0; i < size-1; i++){
//         arr[i]=arr[i+1];
//     }

//     arr[size-1]=temp;
// }

// void leftRotate(int arr[], int size, int d){
//     for(int i=0; i<d; i++){
//         LRotateOne(arr, size);
//     }
// }

// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int d;
//     cin >> d;
//     LRotateOne(arr, size);
//     leftRotate(arr, size, d);
//     cout<<"Left Rotate array by One : "<<endl;
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// t.c: Theta(nd)


// another methods
// #include<iostream>
// using namespace std;
// void leftRotateD(int arr[], int size, int d){
//     int temp[d];
//     for(int i=0; i<d; i++){
//         temp[i]=arr[i];
//     }
//     for(int i =d; i<size; i++){
//         arr[i-d]=arr[i];
//     }
//     for(int i=0; i<d; i++){ 
//         arr[size-d+i]=temp[i];
//     }
// }
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int d;
//     cin >> d;
//     leftRotateD(arr, size, d);
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }


// // T.c : theata(n)
// // auxoloary space: Theta(d);

#include<iostream>
#include<algorithm>
using namespace std;
void reverse(int arr[], int low, int high);
void leftRotateD(int arr[], int size, int d){
    reverse(arr, 0, d-1);
    reverse(arr, d, size-1);
    reverse(arr, 0, size-1);
}
void reverse(int arr[],  int low, int high){
    while(low<=high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int d;
    cin>>d;
    leftRotateD(arr, size, d);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}