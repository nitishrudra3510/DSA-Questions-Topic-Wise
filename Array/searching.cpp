#include<iostream>
using namespace std;
int search(int arr[], int size, int x){
    
    for(int i=0; i<size; i++){
        if(arr[i]==x){
            cout<<"Founded"<<" "<<i<<endl;
            return i;
        }
    }

    return -1;
}
int main(){
    int x;
    cin>>x;

    int arr[] = {1,2,3,4,5,6,7,};
    int size = sizeof(arr)/sizeof(arr[0]);
    search(arr, size, x);
    return 0;
}