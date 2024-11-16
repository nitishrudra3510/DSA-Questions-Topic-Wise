// #include<iostream>
// #include<stack>  // Include stack library
// using namespace std;

// class Queue {
//     stack<int> s1;
//     stack<int> s2;

//     public:
//     // Pushes an element into the queue
//     void push(int x) {
//         s1.push(x);
//     }

//     // Removes the front element from the queue and returns it
//     int pop() {
//         if (s1.empty() && s2.empty()) {
//             cout << "Queue is empty\n";
//             return -1;
//         }

//         // Move elements from s1 to s2 only if s2 is empty
//         if (s2.empty()) {
//             while (!s1.empty()) {
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }

//         int topval = s2.top();
//         s2.pop();
//         return topval;
//     }

//     // Checks if the queue is empty
//     bool empty() {
//         return s1.empty() && s2.empty();
//     }
// };

// int main() {
//     Queue q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);

//     cout << q.pop() << endl; // Output: 10
//     q.push(15);
//     cout << q.pop() << endl; // Output: 20
//     cout << q.pop() << endl; // Output: 30
//     cout << q.pop() << endl; // Output: 40
//     cout << q.pop() << endl; // Output: 15

//     cout << q.pop() << endl; // -1;

//     return 0;
// }



#include<iostream>
#include<stack>  // Include stack library
using namespace std;

class Queue {
    stack<int> s1;

    public:
    // Pushes an element into the queue
    void push(int x) {
        s1.push(x);
    }

    // Helper function to remove the front element recursively
    int pop() {
        if (s1.empty()) {
            cout << "Queue is empty\n";
            return -1;
        }

        // Base case: if stack has only one element, pop and return it
        int topval = s1.top();
        s1.pop();
        if (s1.empty()) {
            return topval;
        }

        // Recursive case: keep the top element aside and process the rest
        int front = pop();

        // Push the top element back into the stack
        s1.push(topval);

        return front;
    }

    // Checks if the queue is empty
    bool empty() {
        return s1.empty();
    }
};

int main() {
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << q.pop() << endl; // Output: 10
    q.push(15);
    cout << q.pop() << endl; // Output: 20
    cout << q.pop() << endl; // Output: 30
    cout << q.pop() << endl; // Output: 40
    cout << q.pop() << endl; // Output: 15

    cout << q.pop() << endl; // Output: -1 (Queue is empty)

    return 0;
}