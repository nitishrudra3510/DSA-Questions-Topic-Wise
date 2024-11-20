// WHy have used array in Queue?
// Ans : An array is used in the queue for efficient, fixed-size storage with O(1) enqueue and 
// dequeue operations. However, it has limited capacity, which can be addressed by converting it into a circular queue to reuse freed space.

#include <iostream>
using namespace std;
#define n 20

class MyQueue {  
    public:
    int* arr;
    int front;
    int back;

    MyQueue() {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x) {
        if(back == n - 1) {
            cout << "Queue is overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;

        if(front == -1) {
            front++;
        }
    }

    void pop() {
        if(front == -1 || front > back) {
            cout << "No element in Queue.." << endl;
            return;
        }
        front++;
    }

    int peek() {
        if(front == -1 || front > back) {
            cout << "No element in Queue.." << endl;
            return -1;
        }
        return arr[front];
    }

    bool empty() {
        if(front == -1 || front > back){
            return true;
        }
        return false;
    }
};

int main() {
    MyQueue q;  // Updated to use the new class name
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << "Front element: " << q.peek() << endl;
    q.pop();

    cout << "Front element after pop: " << q.peek() << endl;
    q.pop();

    cout << "Front element after pop: " << q.peek() << endl;
    q.pop();

    cout << "Front element after pop: " << q.peek() << endl;
    q.pop();

    cout << "It will print 1 then Empty or 0 then NotEmpty() : " << q.empty() << endl;
    return 0;
}