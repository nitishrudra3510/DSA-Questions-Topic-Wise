#include<iostream>
#include <vector>
using namespace std;
struct Node{ // we can use also class or struct of anyone.
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){ // constructor 1-> initialization the object of the class
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){ // it does not need to pass again and again nullptr, automactically takes nullptr from the construcotr.
        data = data1;
        next = nullptr;
    }
};

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};

    Node* y = new Node(arr[5], nullptr);
    cout<<y<<endl; // give the address of the node
    cout<<y->data<<endl; // print the value 6

    // Node z = Node(arr[7], nullptr);
    // cout<<z.data<<endl; // give the value only.
    // cout<<z.next; // print the address of the node

}

