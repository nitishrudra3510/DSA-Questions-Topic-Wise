#include <cstddef>
#include<iostream>
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

Node* insertAtSpecificPos(Node* head, int position, int data){
    Node* new_node = new Node(data);

    if(position == 1){
        new_node->next = head;

        if(head!=NULL){
            new_node->prev = head;
        }
        head = new_node;
        return head;
    }
    Node* curr = head;
    int count=1;
    while(curr!=NULL && count<position){
        count++;
        curr = curr->next;
    }
    // set the prev of new node to curr
    new_node->prev = curr;
    // jo new node hai usko new node ke next curr node ke sath connect kar dega
    new_node->next = curr->next;

    // first update the new_node->next node then it update to the curr next node as new new_node;
    curr->next = new_node;

    // if the new node has not the the last node, update the previous of next node to new node.
    if(new_node->next!=NULL){
        new_node->next->prev = new_node;
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

    int position;
    cout<<"Enter the psotiton upto 3 : ";
    cin>>position;
    int data;
    cout<<"Enter the numebr : ";
    cin>>data;
    head = insertAtSpecificPos(head, position, data);
    // Print the updated list
  	cout << "After inserting Node 1 at the front: ";
    printList(head);
  	
    return 0;
}