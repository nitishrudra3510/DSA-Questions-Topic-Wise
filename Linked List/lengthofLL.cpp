
#include <cstddef>
#include<iostream>
#include<vector>
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
int lengthofLL(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp!=nullptr){
        count++;
        temp = temp->next;
    }
    return count;
}
int main(){
    Node* head = new Node(10);
    head->next = new Node(20);

    head->next->next = new Node(40);
    head->next->next->next = new Node(40);

    cout<<"Counts of node : "<<lengthofLL(head);

}

