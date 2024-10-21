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

     // Constructor to initialize Node with data
    // Node(int data) : data(data), next(nullptr),
  	// prev(nullptr) {}

    
}; 

void Forwardtraversal(Node* head){
    Node* curr = head;

    while(curr != nullptr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}

void BAckwardTraversal(Node* tail){
    Node* curr = tail;

    while(curr!=nullptr){
        cout<<curr->data<<" ";
        curr = curr->prev;
    }
    cout<<endl;
}

int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(5);
    Node* fourth = new Node(15);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;

    cout<<"forward traversal : "<<endl;
    Forwardtraversal(head);

    cout<<"Backward traversal : "<<endl;
    BAckwardTraversal(fourth);

}