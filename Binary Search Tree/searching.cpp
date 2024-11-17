#include <cstddef>
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

// bool SearchingBST(Node* root, int val){
//     if(root==nullptr){
//         cout << "Search Failed: " << val << " is not found in the BST." << endl;       
//         return false;
//     }

//     if(val==root->data){
//         cout<<"Search Successful " <<val << " found in the BST"<<endl;
//         return true;
//     }
//     if(val < root->data){
//         return SearchingBST(root->left, val);
//     }else{
//         return SearchingBST(root->right, val);
//     }

// }

Node* SearchingBST(Node* root, int val){
    if(root==nullptr){
        return nullptr;
    }

    if(root->data == val){
        return root;
    }

    if(val<root->data){
        return SearchingBST(root->left, val);
    }else{
        return SearchingBST(root->right, val);
    }
}
int main(){
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    if(SearchingBST(root, 3)==NULL){
        cout<<"searching failed";
    }else{
        cout<<"Searching succesfully";
    }
    //SearchingBST(root, 7);
    //SearchingBST(root, 3);
}


/*
#include <iostream>
using namespace std;

struct Node {
    int data;        // Value of the node
    Node* left;      // Pointer to the left child
    Node* right;     // Pointer to the right child

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to search for a value in the BST
void SearchingBST(Node* root, int val) {
    if (root == nullptr) {
        // If we reach a null pointer, the value is not in the tree
        cout << "Search Failed: " << val << " is not found in the BST." << endl;
        return;
    }

    if (val == root->data) {
        // Value found
        cout << "Search Successful: " << val << " is found in the BST." << endl;
        return;
    }

    if (val < root->data) {
        // Search in the left subtree if the value is less than the current node's value
        SearchingBST(root->left, val);
    } else {
        // Search in the right subtree if the value is greater than the current node's value
        SearchingBST(root->right, val);
    }
}

int main() {
    // Creating a sample BST
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    // Searching for values in the BST
    SearchingBST(root, 3); // Searching for 3
    SearchingBST(root, 7); // Searching for 7 (not in the BST)

    return 0;
}

*/

/*
#include <iostream>
using namespace std;

struct Node {
    int data;        // Value of the node
    Node* left;      // Pointer to the left child
    Node* right;     // Pointer to the right child

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to search for a value in the BST
Node* SearchingBST(Node* root, int val) {
    if (root == nullptr) {
        // If we reach a null pointer, the value is not in the tree
        cout << "Search Failed: " << val << " is not found in the BST." << endl;
        return nullptr;
    }

    if (val == root->data) {
        // Value found
        cout << "Search Successful: " << val << " is found in the BST." << endl;
        return root;
    }

    if (val < root->data) {
        // Search in the left subtree
        return SearchingBST(root->left, val);
    } else {
        // Search in the right subtree
        return SearchingBST(root->right, val);
    }
}

int main() {
    // Creating a sample BST
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    // Searching for values in the BST
    Node* result1 = SearchingBST(root, 3); // Searching for 3
    Node* result2 = SearchingBST(root, 7); // Searching for 7 (not in the BST)

    // Optionally, you can work with the result nodes
    if (result1) {
        cout << "Node Data: " << result1->data << endl;
    }
    if (result2) {
        cout << "Node Data: " << result2->data << endl; // This will not execute
    }

    return 0;
}

*/