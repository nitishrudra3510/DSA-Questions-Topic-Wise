#include <cstddef>
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
Node *DeleteFirstNode(Node* last){
    if(last == nullptr){
        cout<<"List is empty "<<endl;
        return nullptr;
    }

    Node* head = last->next;

    if(head==last){
        delete head;
        last = NULL;
    }else {
        last->next = head->next;
        delete head;
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

    
    last = DeleteFirstNode(last);
    cout << "List after insertions: ";
    printList(last);

    return 0;
}