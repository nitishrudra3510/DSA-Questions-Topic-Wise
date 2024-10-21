#include<iostream>
#include<algorithm>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1, Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
}; 
Node* insertBegin(Node* head, int data){
    Node* new_node = new Node(data); // create a new node

    new_node->next = head; // make next of its head;
    if(head!=nullptr){ // set previous of head as new node.
        head->prev = new_node;
    }

    return new_node; // return new_node as new node
}
void printList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
  	cout << "\n";
}
int main() {
  
    // Create a hardcoded linked list:
  	// 2 <-> 3 <-> 4
    Node* head = new Node(2);
    Node* temp1 = new Node(3);
    Node* temp2 = new Node(4);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

  	// Print the original list
    cout << "Original Linked List: ";
    printList(head);

    // Insert a new node at the front of the list
    head = insertBegin(head, 1);

    // Print the updated list
  	cout << "After inserting Node 1 at the front: ";
    printList(head);
  	
    return 0;
}