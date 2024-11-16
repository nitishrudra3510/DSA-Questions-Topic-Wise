#include <iostream>
#include <queue>  // Include queue library
using namespace std;

class Stack {
    queue<int> q1;

public:
    // Pushes an element onto the stack
    void push(int x) {
        // Add the new element to the queue
        q1.push(x);

        // Rotate the queue to simulate stack order
        int size = q1.size();
        for (int i = 0; i < size - 1; ++i) {
            q1.push(q1.front());
            q1.pop();
        }
    }

    // Removes the top element from the stack and returns it
    int pop() {
        if (q1.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }

        int topval = q1.front();
        q1.pop();
        return topval;
    }

    // Returns the top element of the stack
    int top() {
        if (q1.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return q1.front();
    }

    // Checks if the stack is empty
    bool empty() {
        return q1.empty();
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << s.pop() << endl; // Output: 40
    s.push(15);
    cout << s.pop() << endl; // Output: 15
    cout << s.pop() << endl; // Output: 30
    cout << s.pop() << endl; // Output: 20
    cout << s.pop() << endl; // Output: 10

    cout << s.pop() << endl; // Output: -1 (Stack is empty)

    return 0;
}