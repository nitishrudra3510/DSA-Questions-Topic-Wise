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

void printCircularList(Node* head, int limit){
    Node* current = head;
    int count = 0;
    for(int i=0; i<limit; i++){
        cout<<current->data<<" ";
        current = current->next;
    }
}
int main(){
    Node* first = new Node(4);
    Node* second = new Node(5);
    Node* last = new Node(6);
    // first node to the connect upto the last node..
    first->next = second;
    second->next = last;

    // last node connect to the first node.
    last->next = first;

    printCircularList(first, 10);

}