#include <cstddef>
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

Node* insertAtPositon(Node* head, int position, int data1) {
    Node* new_node = new Node(data1);
    if(head== nullptr || position == 1){
        new_node->next = head;
        return new_node;
    }
    Node* temp = head;
    for(int i=1; i<position-1 && temp != NULL; i++){
        temp = temp->next;
    }

    if(temp==nullptr){
        cout<<"Position has out of bounds. insertion not performed."<<endl;
        delete new_node; // free the allocated memory, for new_node
        return head; // return the origin head;
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

    head = insertAtPositon(head, position, newData);

    Node* curr = head;
    while (curr != nullptr) {
        cout << " " << curr->data;
        curr = curr->next;
    }

    return 0;
}


// #include <cstddef>
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
//     Node(int data1) {
//         data = data1;
//         next = nullptr;
//     }
// };

// Node* insertAtPosition(Node* head, int position, int data1) {
//     Node* new_node = new Node(data1);

//     // Insert at the beginning when head is nullptr or position is 1
//     if (head == nullptr || position == 1) {
//         new_node->next = head;
//         return new_node; // New node is now the head
//     }

//     Node* temp = head;

//     // Traverse the list to find the position just before where we want to insert
//     for (int i = 1; i < position - 1 && temp != nullptr; i++) {
//         temp = temp->next;
//     }

//     // Check if we reached the end of the list
//     if (temp == nullptr) {
//         cout << "Position is out of bounds. Insertion not performed." << endl;
//         delete new_node; // Free the allocated memory for new_node
//         return head; // Return the original head
//     }

//     // Insert the new node
//     new_node->next = temp->next;
//     temp->next = new_node;

//     return head;
// }

// int main() {
//     Node* head = nullptr; // Start with an empty list

//     // Inserting into an empty list
//     int position = 1, newData = 2; // Insert 2 at the 1st position
//     head = insertAtPosition(head, position, newData);

//     // Insert more nodes
//     head = insertAtPosition(head, 2, 3); // Insert 3 at the 2nd position
//     head = insertAtPosition(head, 2, 4); // Insert 4 at the 2nd position
//     head = insertAtPosition(head, 5, 5); // Attempt to insert 5 at the 5th position

//     // Print the linked list
//     Node* curr = head;
//     while (curr != nullptr) {
//         cout << " " << curr->data;
//         curr = curr->next;
//     }
//     cout << endl;

//     return 0;
// }