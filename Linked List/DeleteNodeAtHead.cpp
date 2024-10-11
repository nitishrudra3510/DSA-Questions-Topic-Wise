
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data1){
//         data = data1;
//         next = nullptr;
//     }
// };

// Node* deleteNodeAtHead(Node* head){
//     if(head == nullptr) return head;
//     Node* temp = head;
//     head = head->next;
//     delete temp;
//     return head;
// }

// int main(){
//     Node* head = new Node(10);
//     head->next  = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);
//     head = deleteNodeAtHead(head);
    
//     while(head!=NULL){
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* deleteNodeAtHead(Node* head) {
    if (head == nullptr) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "List before deletion: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    head = deleteNodeAtHead(head);

    cout << "List after deletion of head: ";
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;

    return 0;
}
// 