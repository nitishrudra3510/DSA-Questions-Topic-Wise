#include<iostream>
#include<algorithm>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* pre;

    Node(int data1, Node* next1, Node* prev1){
        data = data1;
        next = next1;
        pre = prev1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        pre = nullptr;
    }
}; 
Node* ConvertArray2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node* delteHeadNode(Node* head){
    if(head==nullptr || head->next == nullptr){
        return nullptr;
    }
    
    Node* prev = head;
    head = head->next;
    head->pre = nullptr;
    prev->next = nullptr;

    delete prev;
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

    head = delteHeadNode(head);
    print(head);
    return 0;
}