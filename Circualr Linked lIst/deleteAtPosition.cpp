#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    // Constructor to initialize a new node with data
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to delete a specific node with a given key
Node* deleteSpecificNode(Node* last, int key) {
    if (last == nullptr) { // Case when the list is empty
        cout << "List is empty, nothing to delete." << endl;
        return nullptr;
    }

    Node* curr = last->next; // Start from the head of the circular list
    Node* prev = last;

    // If the only node in the list is the one to be deleted
    if (curr == last && curr->data == key) {
        delete curr;
        return nullptr; // Return an empty list
    }

    // If the head node needs to be deleted
    if (curr->data == key) {
        last->next = curr->next;
        delete curr;
        return last;
    }
    
    // Traverse the list to find the node to delete
    while (curr != last && curr->data != key) {
        prev = curr;
        curr = curr->next;
    }

    // If the node to delete is found
    if (curr->data == key) {
        prev->next = curr->next;
        
        // Update last pointer if we're deleting the last node
        if (curr == last) {
            last = prev;
        }

        delete curr;
    } else {
        cout << "Node with data " << key << " not found." << endl;
    }
    
    return last;
}

// Function to print the circular linked list
void printList(Node* last) {
    if (last == nullptr) return;

    Node* head = last->next;
    do {
        cout << head->data << " ";
        head = head->next;
    } while (head != last->next);
    cout << endl;
}

int main() {
    // Creating the circular linked list
    Node* first = new Node(2);
    first->next = new Node(3);
    first->next->next = new Node(4);

    Node* last = first->next->next;
    last->next = first; // Closing the loop to make it circular

    cout << "Original List: ";
    printList(last);
    
    int key = 3;
    last = deleteSpecificNode(last, key);

    cout << "List after deleting the node with data " << key << ": ";
    printList(last);

    return 0;
}