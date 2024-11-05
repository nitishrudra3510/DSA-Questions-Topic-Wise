#include <cstddef>
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data1){
        this->data = data1;
        this->next = nullptr;
    }   
};
void insertAtHead(Node* &head, int val){
    
    Node* n = new Node(val);
    if(head==NULL){
        n->next = n;
        head= n;
        return;
    }
    Node* temp = head;

    while (temp->next!=head) {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
    head = n;
}
void insertAtTail(Node* &head, int val){
    if(head==nullptr) {
        insertAtHead(head, val);
        return;
    }
    Node* n = new Node(val);
    Node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
}


void display(Node* head){
    Node* temp = head;
    do {
        cout<<temp->data<<" ";
        temp = temp->next;
    }while (temp!=head);
    cout<<endl;
}
int main(){
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);
    insertAtHead(head, 6);
    display(head);
}