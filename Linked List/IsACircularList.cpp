#include <iostream>
using namespace std;

// Node structure for linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the end of the list
void insertNode(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;

    if (!head) {
        head = newNode;
        newNode->next = head;
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}


bool isCircular(Node* head) {
    if (!head) return false;

    Node* temp = head->next;

    while (temp != nullptr && temp != head) {
        temp = temp->next;
    }

    return (temp == head);
}


int main() {
    Node* head = nullptr;

    // Inserting nodes
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 4);

    // Checking if the list is circular
    if (isCircular(head)) {
        cout << "The linked list is circular." << endl;
    } else {
        cout << "The linked list is not circular." << endl;
    }

    return 0;
}
