
#include<iostream>
using namespace std;
bool isSorted(int arr[], int size){
    for(int i=1; i<size; i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[] = {4, 7,  10, 40, 200};
    int size = sizeof(arr)/sizeof(arr[0]);
    if(isSorted(arr, size)){
        cout<<"Sorted"<<endl;
    }else{
        cout<<"un Sorted"<<endl;
    }
}
