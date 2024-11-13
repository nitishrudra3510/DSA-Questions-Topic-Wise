// #include <iostream>
// #include <stack>
// using namespace std;

// void pushAtBottom(stack<int>& st, int key) {
//     stack<int> temp;
//     temp.push(key);

//     // Transfer all elements from `st` to `temp`, adding `key` at the bottom
//     while (!st.empty()) {
//         int x = st.top();
//         st.pop();
//         temp.push(x);
//     }

//     // Transfer elements back to `st` to restore the original order with `key` at the bottom
//     while (!temp.empty()) {
//         int x = temp.top();
//         temp.pop();
//         st.push(x);
//     }
// }

// void printStack(stack<int> st) {
//     while (!st.empty()) {
//         cout << st.top() << " ";
//         st.pop();
//     }
//     cout << endl;
// }

// int main() {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);

//     cout << "Original Stack (from top to bottom): ";
//     printStack(st);

//     // Push a new element at the bottom
//     int key = 100;
//     pushAtBottom(st, key);

//     cout << "Stack after inserting " << key << " at the bottom (from top to bottom): ";
//     printStack(st);

//     return 0;
// }


// by recursive..

#include <iostream>
#include <stack>
using namespace std;

void pushAtBottom(stack<int>& st, int key) {
    stack<int> temp;
    temp.push(key);

    // Transfer all elements from `st` to `temp`, adding `key` at the bottom
    while (!st.empty()) {
        int x = st.top();
        st.pop();
        temp.push(x);
    }

    // Transfer elements back to `st` to restore the original order with `key` at the bottom
    while (!temp.empty()) {
        int x = temp.top();
        temp.pop();
        st.push(x);
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

    cout << "Original Stack (from top to bottom): ";
    printStack(st);

    

    return 0;
}