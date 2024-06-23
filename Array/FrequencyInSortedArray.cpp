// frequency ; how many times element repeated in the array;

#include<iostream>
using namespace std;
void frequencySorted(int arr[], int n){
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
    frequencySorted(arr, n);
    return 0;
}