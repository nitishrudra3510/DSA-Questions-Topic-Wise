// #include<iostream>
// using namespace std;
// void leftRotateOne(int arr[], int n){
//     int temp = arr[0];
//     for(int i=1; i<n; i++){
//         arr[i-1] = arr[i];
//     }

//     arr[n-1] = temp;

// }
// void leftRotateByD(int arr[], int n, int d){
//     for(int i=0; i<d; i++){
//         leftRotateOne(arr, n);
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//    // time oomplexicity = T(nd);
//    // Auxiliary space = T(1);
//     int d;
//     cin>>d;

//     leftRotateByD(arr, n, d);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }




// 2nd soltion method


// #include<iostream>
// using namespace std;
// void leftRotateByD(int arr[], int n, int d){
//     int temp[d];
//     for(int i=0; i<d; i++){
//         temp[i] = arr[i];
//     }

//     for(int i=d; i<n; i++){
//         arr[i-d] = arr[i];
//     }

//     for(int i=0; i<d; i++){
//         arr[n-d+i]= temp[i];
//     }

// // time complexicity = t(d+n-d+d) = Þ(n+d) = T(n)

// // auxiliary space = T(d);
// }


// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int d;
//     cin>>d;

//     leftRotateByD(arr, n, d);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }







// 3rd Solutions:

#include<iostream>
using namespace std;

// Function to reverse the elements in the array from index 'low' to 'high'
void reverse(int arr[], int low, int high){
    while(low < high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

// Function to left rotate array 'arr[]' by 'd' positions
void leftRotateByD(int arr[], int n, int d){
    // Handle cases where d >= n
    d = d % n;

    // Edge case: if d is 0, no rotation needed
    if(d == 0){
        return;
    }

    // Step 1: Reverse the first 'd' elements
    reverse(arr, 0, d - 1);

    // Step 2: Reverse the remaining 'n-d' elements
    reverse(arr, d, n - 1);

    // Step 3: Reverse the entire array
    reverse(arr, 0, n - 1);
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

    int d;
    cout << "Enter the number of positions to rotate left: ";
    cin >> d;

    // Perform left rotation by 'd' positions
    leftRotateByD(arr, n, d);

    // Print the rotated array
    cout << "Array after left rotation by " << d << " positions: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


// time complexity : O(N)
// auxiliary Space complexity : T(1);