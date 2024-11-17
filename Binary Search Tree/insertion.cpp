#include <cstddef>
#include <iostream>
#include <iterator>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node* insertBST(Node* root, int val){
    if(root==NULL){
        return new Node(val);
    }

    if(val<root->data){
        root->left = insertBST(root->left, val);
    }

    else{
        root->right = insertBST(root->right, val);
    }

    return root;
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root==NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
}


int main(){
    Node* root = NULL;

    root = insertBST(root, 10);
    root = insertBST(root, 5);
    root = insertBST(root, 20);
    root = insertBST(root, 3);
    root = insertBST(root, 7);
    root = insertBST(root, 15);
    root = insertBST(root, 30);

    // Display the tree using different traversals
    cout << "In-order Traversal (Sorted Order): ";
    inorder(root);
    cout << endl;

    cout << "Pre-order Traversal: ";
    preorder(root);
    cout << endl;

    cout << "Post-order Traversal: ";
    postorder(root);
    cout << endl;

    return 0;

    return 0;
}