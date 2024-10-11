#include <cstddef>
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* DeleteNodeAtPosition(Node* head, int k){
    if(head==nullptr) return 0;
    if(k==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    int count = 0; Node* temp = head; Node* prev = nullptr;

    while(temp!=NULL){
        if(count==k){
            prev->next = prev->next->next;
            delete temp;
        }
        prev = temp;
        temp = temp->next;
        count++;
    }

    return head;
}

int main(){
    Node* head = new Node(10);
    head->next  = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    int k;
    cout<<"Enter the kth number want to delete : ";
    cin>>k;
    cout << "List before deletion: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    head = DeleteNodeAtPosition(head, k);

    cout << "List after deletion of head: ";
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;

    return 0;
}
