#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "nitishrudra";
    int max = 0;

    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        int count = 1;
        for(int j=i+1; j<str.length(); j++){
            if(str[j]==ch){
                count++;
            }
        }

        if(max<count){
            max = count;
        }   
    }

    cout<<max;
}