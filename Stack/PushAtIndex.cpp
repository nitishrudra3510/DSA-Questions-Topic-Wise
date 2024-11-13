#include <iostream>
#include <stack>
using namespace std;

void pushAtIndex(stack<int>& st, int key, int index) {
    stack<int> temp;
    for(int i=0; i<index; i++){
        int x = st.top();
        temp.push(x);
        st.pop();
        
    }
    st.push(key);
    while (!temp.empty()) {
        st.push(temp.top());
        temp.pop();
    }

}

void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << "Original Stack (from top to bottom): ";
    printStack(st);

    // Push a new element at the bottom
    int key = 100;
    int index = 2;
    pushAtIndex(st, key, index);

    cout << "Stack after inserting " << key << " at the "<<index<< " index ";
    printStack(st);

    return 0;
}