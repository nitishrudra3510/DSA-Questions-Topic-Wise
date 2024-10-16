/* 
Approach: 

Initialize a pointer curr to traverse the list starting from head.
Loop through the list to find the node with data equal to key.
If not found then return from function.
Create a new node, say new_node initialized with the given data.
Make the next pointer of new_node as next of given node.
Update the next pointer of given node point to the new_node.

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

Node* insertAfter(Node* head, int key, int data1){
    Node* new_node = new Node(data1);
    Node* temp = head;
    while(temp!=nullptr){
        if(temp->data == key){
            new_node->next = temp->next;
            temp->next = new_node;
            return head;
        }
        temp = temp->next;
    }
    delete new_node; // Avoid the memory leak if key not found.
    return head;

}
int main(){
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(5);
    head->next->next->next = new Node(6);

    int key = 5, newData = 9;

    head = insertAfter(head, key, newData);

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