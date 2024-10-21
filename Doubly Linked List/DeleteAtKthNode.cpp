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
}; 
Node* ConvertArray2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* newprev = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, newprev);
        newprev->next = temp;
        newprev = temp;
    }
    return head;
}
Node* deleteTailNode(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }

    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }

    Node* newTail = tail->prev;
    newTail->next = nullptr;
    tail->prev = nullptr;

    delete tail;
    return head;
}

void print(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    vector<int> arr = {12, 23, 33, 9, 4};
    Node* head = ConvertArray2DLL(arr);

    head = deleteTailNode(head);

    print(head);
    return 0;
}