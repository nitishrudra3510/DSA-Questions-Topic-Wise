// #include<iostream>
// #include<vector>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     public:
//     Node(int data1, Node* next1){
//         data = data1;
//         next = next1;
//     }

//     public:
//     Node(int data1){
//         data = data1;
//         next = nullptr;
//     }
// };

// Node* convertArr2LL(vector<int> &arr){ // we did not to return entire linked list but return to head only;
//     Node* head = new Node(arr[3]);
//     Node* mover = head;
//     for(int i=1; i<arr.size(); i++){
//         Node* temp = new Node(arr[i]);
//         mover->next = temp;  // only links the current node to the next node (i.e., it connects the current node to the new node). However, it does not move the mover pointer to the next node. This is why the second line mover = temp is required to actually move the mover pointer forward to the new node after the linking is done.
//         mover = temp;
//     }

//     return head;
// }
// int main(){
//     vector<int> arr = {10,2,3,4,5};

//     Node* head = convertArr2LL(arr);
//     cout<<head->data<<endl;
// }



#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize node with data
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to convert an array to a linked list
Node* Array2LL(vector<int> &arr) {
    if (arr.size() == 0) return nullptr; // handle empty array

    Node* head = new Node(arr[0]);  // Create the head node
    Node* mover = head;             // Mover points to the head initially

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);  // Create new node for each element
        mover->next = temp;             // Link the previous node to the new node
        mover = temp;                   // Move the mover to the new node
    }

    return head;  // Return the head of the linked list
}

int main() {
    vector<int> arr = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    Node* head = Array2LL(arr);  // Convert array to linked list

    // Print the linked list to verify
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
}