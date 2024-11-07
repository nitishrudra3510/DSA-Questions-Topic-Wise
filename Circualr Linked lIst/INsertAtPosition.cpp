#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

Node *insertAtPosition(Node *last, int data, int pos){
    if(last==nullptr){
        if(pos!=1){
            cout<<"Invalid Position"<<endl;
            return last;
        }

        // create a new node and make it point to itself
        Node *newNode = new Node(data);
        last = newNode;
        last->next = last;
        return last;
    }

    Node *newNode = new Node(data);

    Node * curr = last->next;

    if(pos==1){
        newNode->next = curr;
        last->next = newNode;
        return last;
    }

    // Traversal the list to find the insertion point
    for(int i=1; i<pos-1; ++i){
        curr = curr->next;

        if(curr == last->next){
            cout<<"Invalid position!"<<endl;
            return last;
        }
    }

    newNode->next = curr->next;
    curr->next = newNode;

    // if the node insert at the end then update
    if(curr==last){
        last = newNode;
    }
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
    Node *first = new Node(2);
    first->next = new Node(3);
    first->next->next = new Node(4);

    Node *last = first->next->next;
    last->next = first;

    cout << "Original list: ";
    printList(last);

    // Insert elements at specific positions
    int data = 5, pos = 2;
    last = insertAtPosition(last, data, pos);
    cout << "List after insertions: ";
    printList(last);

    return 0;
}