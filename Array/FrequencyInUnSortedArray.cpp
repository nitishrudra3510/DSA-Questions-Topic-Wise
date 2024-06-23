//unsorted frequency array;

#include<iostream>
#include<algorithm>
using namespace std;
void FrequencyUnsortedArray(int arr[], int n){
    sort(arr, arr+n);
    int frequency = 1, i=1;
    while(i<n){
        while(i<n && arr[i]==arr[i-1]){
            frequency++;
            i++;
        }

        cout<<arr[i-1]<<" "<<frequency<<endl;

        i++;
        frequency=1;
    }

    if(n==1 || arr[n-1]!=arr[n-2]){
        cout<<arr[n-1]<<" "<<"1"<<endl;
    }


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
    FrequencyUnsortedArray(arr, n);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}



















// #include<iostream>
// #include<algorithm>
// using namespace std;
// void sortedArray(int arr[], int n){
//     sort(arr, arr+n);
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
//     sortedArray(arr, n);

//     for(int i = 0; i < n; i++){
//         cout<<arr[i]<<" "<<endl;
//     }
//     return 0;
// }