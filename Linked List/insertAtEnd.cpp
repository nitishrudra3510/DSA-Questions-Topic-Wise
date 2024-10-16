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

Node* insertAtEnd(Node* head, int data1) {
    Node* new_node = new Node(data1);
    if(head==nullptr){
        new_node->next = head;
        return new_node;
    }
    Node* temp = head;
    while(temp->next!=nullptr){ // if i take temp->next != nullptr then it has point last node before the nullptr and then it is easily connect to last node that's why I have used.
        temp = temp->next;
    }   
    temp->next=new_node; // point the new node of the last node.

    return head;
}

int main() {
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(5);
    head->next->next->next = new Node(6);

    int data = 90;
    head = insertAtEnd(head,data);

    Node* curr = head;
    while (curr != nullptr) {
        cout << " " << curr->data;
        curr = curr->next;
    }

    return 0;
}


// this is the complex operations
// #include<iostream>
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

// Node* insertAtEnd(Node* head, int data1) {
//     Node* new_node = new Node(data1);
//     if(head==nullptr){
//         new_node->next = head;
//         return new_node;
//     }
//     Node* temp = head;
//     Node* prev = nullptr;
//     while(temp!=nullptr){
//         prev = temp;
//         temp = temp->next;
//     }   
//     new_node->next = nullptr;

//     return head;
// }

// int main() {
//     Node* head = new Node(2);
//     head->next = new Node(3);
//     head->next->next = new Node(5);
//     head->next->next->next = new Node(6);

//     int data = 90;
//     head = insertAtEnd(head,data);

//     Node* curr = head;
//     while (curr != nullptr) {
//         cout << " " << curr->data;
//         curr = curr->next;
//     }

//     return 0;
// }