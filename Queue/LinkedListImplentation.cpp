// Why have used Linked List in Queue?
// In a linked list implementation of a queue, each element (node) points to the next, allowing dynamic resizing without a fixed capacity. this makes enqueue and dequeue operations efficient (o(1)) without worring about overflow..

#include <cstddef>
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
    public:
    Node* front;
    Node* back;

    Queue(){
        front = NULL;
        back = NULL;
    }

    void push(int x){
        Node* n = new Node(x);
        if(front==NULL){
            back=n;
            front = n;
            return;
        }
        back->next = n;
        back=n;
    }

    void pop(){
        if(front==NULL){
            cout<<"Queue is underflow";
            return;
        }

        Node* todelete = front;
        front = front->next;

        delete todelete;
    }

    int peek(){
        if(front==NULL){
            cout<<"Queue underflow"<<endl;
            return -1;
        }

        return front->data;
    }

    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.empty()<<endl;

    return 0;
}