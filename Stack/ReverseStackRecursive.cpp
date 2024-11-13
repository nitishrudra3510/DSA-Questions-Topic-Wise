#include <iostream>
#include <stack>
using namespace std;

void pushAtBottom(stack<int>& st, int key) {
    
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

    cout << "Original Stack (from top to bottom): ";
    printStack(st);

    // Push a new element at the bottom
    int key = 100;
    pushAtBottom(st, key);

    cout << "Stack after inserting " << key << " at the bottom (from top to bottom): ";
    printStack(st);

    return 0;
}