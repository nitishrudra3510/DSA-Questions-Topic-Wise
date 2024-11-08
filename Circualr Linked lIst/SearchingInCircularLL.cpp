#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Function to search for a specific value in the
// circular linked list
bool search(Node* last, int key) {
    if (last == nullptr) {
        // If the list is empty
        return false;
    }

    Node* head = last->next;
    Node* curr = head;

    // Traverse the list to find the key
    while (curr != last) {
        if (curr->data == key) {
          // Key found
            return true; 
        }
        curr = curr->next;
    }

    // Check the last node
    if (last->data == key) {
      // Key found
        return true; 
    }
    // Key not found
    return false; 
}

void printList(Node* last) {
   if(last == NULL) return;
  
    Node *head = last->next;
    while (true){
        cout << head->data << " ";
        head = head->next;
        if (head == last->next) break;
    }
    cout << endl;
}

int main() {
    // Create circular linked list: 2, 3, 4
    Node* first = new Node(2);
    first->next = new Node(3);
    first->next->next = new Node(4);

    Node* last = first->next->next;
    last->next = first;

    cout << "Original list: ";
    printList(last);

    // Search for a specific value
    int key = 3;
    bool found = search(last, key);
    if (found) {
        cout << "Value " << key << " found in the list." << endl;
    } else {
        cout << "Value " << key << " not found in the list." << endl;
    }

    return 0;
}
