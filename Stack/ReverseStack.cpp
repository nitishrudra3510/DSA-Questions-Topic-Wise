#include <iostream>
#include <stack>
using namespace std;

// Reverse the stack using two stacks
void method1(stack<int>& st) {
    stack<int> temp;
    stack<int> rt;

    // Transfer elements to `temp` stack (essentially reversing them)
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

// Using an extra array to reverse the stack
void method(stack<int>& st) {
    int n = st.size();
    int* arr = new int[n]; // Dynamically allocate an array
    int index = 0;

    // Transfer elements to the array
    while (!st.empty()) {
        arr[index++] = st.top();
        st.pop();
    }

    // Push elements back into the stack in reverse order
    for (int i = n - 1; i >= 0; i--) {
        st.push(arr[i]);
    }

    delete[] arr; // Free dynamically allocated memory
}

int main() {
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

    method1(st);  // Reverse using two stacks
    // or method(st); // Reverse using an extra array

    cout << "Reversed Stack (from top to bottom): ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}