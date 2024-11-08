#include<iostream>
using namespace std;

// use 2 stack;
void method1(stack<int> st){
    stack<int> temp;
    stack<int> rt;

    while (!st.empty()) {
        int x = st.top();
        st.pop();
        temp.push(x);
    }

    // Transfer elements from `temp` to `rt` to restore the original order in reverse stack
    while (!temp.empty()) {
        int x = temp.top();
        temp.pop();
        rt.push(x);
    }

    // Move elements from `rt` back to the original stack `st`
    while (!rt.empty()) {
        int x = rt.top();
        rt.pop();
        st.push(x);
    }
}
// using an array..
void method(){

}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << "Original Stack (from top to bottom): ";
    stack<int> temp = st;  // Temporary stack to display contents
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    cout<< "Reversed Stack : ";
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }

}