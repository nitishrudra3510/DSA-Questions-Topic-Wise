#include<iostream>
using namespace std;

class Stack {
public:
    int arr[5];
    int idx;

    Stack() {
        idx = -1;
    }

    void push(int val) {
        if(idx == 4) {
            cout << "Stack is full" << endl;
            return; // Prevent adding an element if stack is full
        }
        idx++;
        arr[idx] = val;
    }

    void pop() {
        if(idx == -1) {
            cout << "Stack is empty" << endl;
            return; // Prevent removing an element if stack is empty
        }
        idx--;
    }

    int top() {
        if(idx == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[idx];
    }

    int size() {
        return idx + 1;
    }

    void display() {
        if(idx == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements: ";
        for(int i = 0; i <= idx; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60); // Will output "Stack is full"

    cout << st.top() << endl;  // Should output 50
    cout << st.size() << endl; // Should output 5
    st.display();              // Will display the elements in the stack
}