#include<iostream>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* insertAtNode(Node* head, int data1){
    Node* new_node = new Node(data1);

    new_node->next = head;

    head = new_node;
    return head;
}

int main(){
    Node* head = new Node(2);
    head->next = new Node(12);
    head->next->next = new Node(15);
    head->next->next->next = new Node(20);

    int data = 10;
    head = insertAtNode(head, data);
    Node* curr = head;
    while(curr!=nullptr){
        cout<<" "<<curr->data;

        curr = curr->next;
    }
    return 0;
}



// // C++ Program to insert the node at the beginning of Linked List

// #include <iostream>
// using namespace std;

// struct Node {

//     int data;
//     Node* next;

//     Node(int new_data) {
//         data = new_data;
//         next = nullptr; 
//     }
// };

// // Function to insert a new node at the beginning of the
// // list
// Node* insertAtFront(Node* head, int new_data) {
  
//     // Create a new node with the given data
//     Node* new_node = new Node(new_data);

//     // Make the next of the new node point to the current
//     // head
//     new_node->next = head;

//     // Return the new node as the new head of the list
//     return new_node;
// }

// void printList(Node* head) {
  
//     // Start from the head of the list
//     Node* curr = head;

//     // Traverse the list
//     while (curr != nullptr) {
      
//         // Print the current node's data
//         cout << " " << curr->data;

//         // Move to the next node
//         curr = curr->next;
//     }

//     // Print a newline at the end
//     cout << endl;
// }

// int main() {
  
//     // Create the linked list 2->3->4->5
//     Node* head = new Node(2);
//     head->next = new Node(3);
//     head->next->next = new Node(4);
//     head->next->next->next = new Node(5);

//     int data = 1;
//     head = insertAtFront(head, data);
//     printList(head);

//     return 0;
// }

