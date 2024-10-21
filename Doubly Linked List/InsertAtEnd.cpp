#include <cstddef>
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
Node* insertEnd(Node* head, int data){
    Node* new_node = new Node(data);
    if(head == NULL){
        return new_node;
    }

    else{
        Node* temp = head;
        while (temp->next!=NULL) {
            temp=temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
    }

    return head;
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
    head = insertEnd(head, 10);

    // Print the updated list
  	cout << "After inserting Node 1 at the front: ";
    printList(head);
  	
    return 0;
}