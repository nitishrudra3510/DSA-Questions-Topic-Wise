/*
Algorithm:

1. Traverse the linked list while keeping track of the previous node until given node is reached.
2. Once node is found, allocate memory for a new node and set according to given data .
3. Point the next pointer of the new node to node given node.
4. Point the next pointer of the previous node to the new node.
5. If given key is the head, update the head to point to the new node.
*/

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1){
        data = data1;
        next = NULL;
    }
};

Node* insertBefore(Node* head, int key, int data1){
    Node* new_node = new Node(data1);

    if(head!=nullptr && head->data == data1){
        new_node->next = head;
        return new_node;
    }
    Node* temp = head;
    Node* prev = nullptr;
    while(temp!=nullptr){
        if(temp->data == key){
            new_node->next = temp;
            if(prev!=nullptr) prev->next = new_node;
            return head;
        }
        prev = temp;
        temp=temp->next;
    }

    delete new_node;
    return head;

}
int main(){
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(5);
    head->next->next->next = new Node(6);

    int key = 5, newData = 9;

    head = insertBefore(head, key, newData);

    Node* curr = head;
    while(curr != nullptr){
        cout<<" "<<curr->data;
        curr = curr->next;
    }


        // Free the allocated memory 
    curr = head; 
    while(curr!=nullptr){
        Node* nextnode = curr->next; 
        delete curr; // Delete the current node
        curr = nextnode; // Move to the next node
    }
    
    /*
    Proper memory management prevents memory leaks, which can lead to increased memory
     usage and reduced performance over time, especially in long-running programs. 
     Additionally, it ensures your code adheres to best practices, making it more robust, 
     maintainable, and portable across different environments where automatic cleanup might not occur.
    */
    return 0;
}