#include<iostream>
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

Node* insertBefore(Node* head, int key, int data1) {
    Node* new_node = new Node(data1);

    // Special case: Inserting before the head (key == 1)
    if (key == 1) {
        new_node->next = head;
        return new_node;  // new_node becomes the new head
    }

    Node* temp = head;
    Node* prev = nullptr;

    // Traverse the list until the position before the 'key'
    for (int i = 1; i < key - 1 && temp != nullptr; i++) {
        prev = temp;
        temp = temp->next;
    }

    // If temp is nullptr, the key is out of bounds
    if (temp == nullptr) {
        cout << "Position out of bounds" << endl;
        return head;
    }

    // Insert the new node before the node at the 'key' position
    new_node->next = temp;
    prev->next = new_node;

    return head;
}

int main() {
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(5);
    head->next->next->next = new Node(6);

    int key = 3, newData = 4;

    head = insertBefore(head, key, newData);

    Node* curr = head;
    while (curr != nullptr) {
        cout << " " << curr->data;
        curr = curr->next;
    }

    return 0;
}