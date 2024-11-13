#include <cstddef>
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1) {
        data = data1;
        next = NULL;  // Correct initialization of next pointer
    }
};

class Stack {
public:
    Node* head;
    int size;

    Stack() {
        head = NULL;  // Correct initialization of head
        size = 0;
    }

    // Push an element onto the stack
    void push(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    // Pop the top element from the stack
    void pop() {
        if (head == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    // Return the top element of the stack
    int top() {
        if (head == NULL) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return head->data;
    }

    // Return the size of the stack
    int getSize() {
        return size;
    }

    void print(Node* temp){
        if(temp==NULL){
            return;
        }
        print(temp->next);
        cout<<temp->data<<" ";
    }

    // Display the elements of the stack
    void display() {
        // if (head == NULL) {
        //     cout << "Stack is empty" << endl;
        //     return;
        // }
        Node* temp = head;
        // cout << "Stack elements: ";
        // while (temp != NULL) {
        //     cout<<temp->data<<" ";
        //     temp = temp->next;
        // }
        // cout << endl;

        print(temp);
        cout<<endl;
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.push(50);
    
    cout << "Top element: " << st.top() << endl; // Should output 30
    cout << "Size of stack: " << st.getSize() << endl; // Should output 3

    st.display(); // Should display "30 20 10"
    
    st.pop(); // Removes 30 from the stack
    cout << "After popping, top element: " << st.top() << endl; // Should output 20
    
    st.display(); // Should display "20 10"
    
    return 0;
}