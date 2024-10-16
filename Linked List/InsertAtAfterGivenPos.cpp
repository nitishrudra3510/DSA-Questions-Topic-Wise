#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* insertAfter(Node* head, int position, int data1) {
    Node* new_node = new Node(data1);

    // Special case if we're inserting at the head (position 1)
    if (position == 1) {
        new_node->next = head;
        return new_node; 
    }

    Node* temp = head;

    
    for (int i = 1; i < position && temp != nullptr; i++) {
        temp = temp->next;
    }

    
    if (temp == nullptr) {
        cout << "Position out of bounds" << endl;
        return head;
    }

    new_node->next = temp->next;
    temp->next = new_node;

    return head;
}

int main() {
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(5);
    head->next->next->next = new Node(6);

    int position = 3, newData = 4; // Insert 4 after the 3rd position

    head = insertAfter(head, position, newData);

    Node* curr = head;
    while (curr != nullptr) {
        cout << " " << curr->data;
        curr = curr->next;
    }

    return 0;
}