#include <iostream>
#include <stack>
using namespace std;

void pushAtIndex(stack<int>& st, int key, int index) {
    stack<int> temp;

    while (!st.empty()) {
        temp.push(st.top());
        st.pop();
    }

    int count = 0;
    while (!temp.empty() && count < index) {
        st.push(temp.top());
        temp.pop();
        count++;
    }

    st.push(key);

    while (!temp.empty()) {
        st.push(temp.top());
        temp.pop();
    }
}

void printStack(stack<int> st) {
    stack<int> temp;

    while (!st.empty()) {
        temp.push(st.top());
        st.pop();
    }

    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
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

    cout << "Original Stack (bottom to top): ";
    printStack(st);

    int key = 100;
    int index = 2;
    pushAtIndex(st, key, index);

    cout << "Stack after inserting " << key << " at index " << index << " (bottom to top): ";
    printStack(st);

    return 0;
}