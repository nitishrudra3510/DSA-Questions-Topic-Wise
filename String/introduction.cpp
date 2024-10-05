#include <algorithm>
#include <cstdio>
#include<iostream>
#include <iterator>
#include<string>
using namespace std;
int main(){
    //char str[5] = {'a', 'b', 'c', 'd', 'e'};

    // for(int i = 0; i <5; i++){
    //     cout<<str[i]<<" ";
    // }

    // char ch = 't';
    // cout<<(int)ch<<" ";

    // string str;
    // getline(cin, str);
    // cout<<str<<endl;

    // it vowels
    // string str = "nitish";
    // int count = 0;
    // int i = 0;

    // // Iterate through the string until the null terminator '\0' is encountered
    // while(str[i] != '\0') {
    //     // Check if the current character is a vowel
    //     if (str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'e' || str[i] == 'a') {
    //         count++;
    //     }
    //     i++; // Increment 'i' to move to the next character
    // }
    // cout << "Number of vowels: " << count << endl;
    // return 0;



    // string str = "nitsh explode explode";
    //cout<<str.length(); // 0 to str.length()

    // push and pop back
    string str = "nitsh explode explode";
    cout<<str<<endl;
    str.push_back('r'); // single character takes
    str.push_back('b');
    str.push_back(str[0]);
    str.push_back('s');
    cout<<str<<endl;

    str.pop_back(); // last element ko uda dega..
    // cout<<str<<endl;



    // string s = "abc"; // we can add string in string variable
    // cout<<s<<endl;
    // s = s+"abc"; //
    // cout<<s<<endl;


    // reverse string

    // string str = "abcdefg";
    // reverse(str.begin(), str.end());
    // cout<<str<<endl;
    // reverse(str.begin()+2, str.end()-3);
    // cout<<str<<endl;

    // reverse(str.begin()+2, str.begin()+3);
    // cout<<str<<endl;


    // input a string of even length and reverse the first of half of the strings;

    // string str;
    // getline(cin, str);
    // int n = str.length();
    // reverse(str.begin(), str.begin()+n/2);
    // cout<<str<<endl;


    // substring str = str.subsstring(0, str.length())
    
    // string s = "jkdbsvnk";
    // cout<<s.substr(3, 4)<<endl;
    // cout<<s.substr(4, 6);



    // string str;
    // cin>>str;
    // cout<<str.substr(str.length()/2, str.length())<<endl;

    // to string : it converts int to string
    // int x = 4352;
    // string str = to_string(x);
    // cout<<str<<endl;

    // int x = 3523424;
    // string str = to_string(x);
    // int n = str.length();
    // cout<<n<<endl;


    // question : 
    // string str;
    // cin>>str;
    // int count = 0;
    // int n = str.length();
    // for(int i=0; i<n; i++){
    //     if(n==1) break;
    //     if(n==2 && str[0]!= str[1]){
    //         count = 1;
    //         break;
    //     }
    //     if(i==0){
    //         if(str[i]!=str[i+1]) count++;
    //     }
    //     else if(i==n-1){
    //         if(str[i]!=str[i+1]) count++;
    //     }
    //     else if(str[i]!=str[i+1] && str[i]!=str[i-1]){
    //         count++;
    //     }
        
    // }
    // cout<<count;


    // sort string
    // string str;
    // getline(cin, str);
    // sort(str.begin(), str.end());
    // cout<<str;


    // questions 
    // string s = "nitish rudra";
    // string str = "nitish rudra";
    // sort(s.begin(), s.end());
    // sort(str.begin(), str.end());
    // cout<<s<<endl;
    // cout<<endl;
    // if(s==str) cout<<true;
    // else cout<<false;

}