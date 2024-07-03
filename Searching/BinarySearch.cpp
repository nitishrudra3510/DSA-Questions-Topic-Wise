#include<iostream>
using namespace std;
int bsearch(int arr[], int n, int x){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>0){
            return mid-1;
        }

        else{
            return mid+1;
        }
    }
    return -1;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cin>>x;

    cout<<bsearch(arr,n,x);
}