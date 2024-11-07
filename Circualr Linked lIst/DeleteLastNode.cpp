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

Node* deleteLastNode(Node* last) {
    if (last == nullptr) {
        return nullptr;
    }

    Node* head = last->next;
    if (head == last) {  // Only one node in the list
        delete last;
        return nullptr;
    }

    Node* curr = head;
    while (curr->next != last) {  // Stop at the second-last node
        curr = curr->next;
    }

    curr->next = head;  // Link second-last node to head
    delete last;  // Delete the last node
    return curr;  // Update last to second-last node
}

void printList(Node* last) {
    if (last == nullptr) return;

    Node* curr = last->next;
    do {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != last->next);
    cout << endl;
}

int main() {
    Node* first = new Node(2);
    first->next = new Node(3);
    first->next->next = new Node(4);

    Node* last = first->next->next;
    last->next = first;

    cout << "Original List: ";
    printList(last);

    last = deleteLastNode(last);

    cout << "List after deleting the last node: ";
    printList(last);

    return 0;
}