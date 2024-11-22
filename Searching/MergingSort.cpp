// You are using GCC
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, m;
    
    cin>>n;
    
    vector<int> dept1(n);
    for(int i=0; i<n; i++){
        cin>>dept1[i];
    }
    
    cin>>m;
    vector<int> dept2(m);
    
    for(int i=0; i<m; i++){
        cin>>dept2[i];
    }
    
    vector<int> merged = dept1;
    merged.insert(merged.end(), dept2.begin(), dept2.end());
    
    sort(merged.begin(), merged.end());
    
    for(int id: merged){
        cout<<id <<" ";
    }
}