#include <cstddef>
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

// function to insert a node into an empty circular singly linked list;

Node* insertInEmptyList(Node *last, int data){
    if(last != nullptr) return last;

    // crete a new node
    Node *newNode = new Node(data);

    // point to new node itself
    newNode->next = newNode;

    // update last to point to the new node
    last = newNode;
    return last;
}

void printList(Node* last){
    if(last==NULL) return;

    // start from the head node;
    Node* head = last->next;
    while(true){
        cout<< head->data<<" ";
        head = head->next;

        if(head==last->next) break;
    }

    cout<<endl;


}

int main(){
    Node *last = nullptr;

    // Insert a node into the empty list
    last = insertInEmptyList(last, 1);

    // Print the list
    cout << "List after insertion: ";
    printList(last);

    return 0;
}