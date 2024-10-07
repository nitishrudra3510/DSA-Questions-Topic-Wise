#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){ // we did not to return entire linked list but return to head only;
    Node* head = new Node(arr[3]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;  // only links the current node to the next node (i.e., it connects the current node to the new node). However, it does not move the mover pointer to the next node. This is why the second line mover = temp is required to actually move the mover pointer forward to the new node after the linking is done.
        mover = temp;
    }

    return head;
}
int main(){
    vector<int> arr = {10,2,3,4,5};

    Node* head = convertArr2LL(arr);
    cout<<head->data<<endl;
}