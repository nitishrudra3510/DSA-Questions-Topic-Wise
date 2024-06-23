

// 3rd methods;
#include<iostream>
using namespace std;
int leaderArray(int arr[], int n){
    for(int i=0; i<n; i++){
        bool flag = false;
        for(int j=0; j<arr[i]; j++){
            if(arr[i]<=arr[j]){
                flag =  true;
                break;
            }
        }

        if(!flag){
            cout<<arr[i]<<" ";
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

    LeaderArray(arr, n);

    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}