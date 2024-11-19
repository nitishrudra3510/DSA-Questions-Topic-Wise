#include<iostream>
#include <utility>
#include<vector>
using namespace std;

int partition(vector<int>& vec, int low, int high){
    int pivot = vec[high];
    int i = low-1;

    for(int j=low; j<high; j++){
        if(vec[j] <= pivot){
            i++;
            swap(vec[i], vec[j]);
        }
    }

    swap(vec[i+1], vec[high]);
    return i+1;
}

