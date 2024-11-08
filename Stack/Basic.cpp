#include<iostream>
#include <iterator>
using namespace std;

// int main(){
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);

//     st.pop();
//     //st.top();

//     while(st.size()!=0){
//         cout<<st.top();
//         st.pop();
//     }

// }

// how to get the element back in the stack after printing/popping.....

// int main(){
//     stack<int> st;
//     stack<int> temp;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);

//     //st.top();

//     while(st.size()>0){
//         cout<<st.top()<<" ";
//         int x = st.top();
//         st.pop();
//         temp.push(x);
//     }
//     cout<<endl;

//     // putting elements back to the temp to st
//     while(temp.size()>0){
//         int x = temp.top();
//         temp.pop();
//         st.push(x);
//     }
//     cout<<st.top()<<endl;

// }


int main(){
    stack<int> st;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    //st.top();

    // print the buttom to top;
    while(st.size()>0){
        int x = st.top();
        st.pop();
        temp.push(x);
    }

    while(temp.size()>0){
        cout<<temp.top()<<" ";
        temp.pop();
    }
}
