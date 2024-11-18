#include <cstddef>
#include <cstdlib>
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
void inorder(Node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


Node* inorderSucc(Node* root){
    Node* curr = root;
    while(curr && curr->left != NULL){
        curr = curr->left;
    }

    return curr;
}
Node* deletingBST(Node* root, int val){
    if(root==NULL){
        return NULL;
    }

    if(val<root->data){
        root->left = deletingBST(root->left, val);
    }
    else if(val>root->data){
        root->right = deletingBST(root->right, val);
    }
    else{
        // case 1:
        if(root->left==NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }

        //case 2:
        else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }
        

        // case 3:
        Node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deletingBST(root->right, temp->data);
    }
    return root;
}   
int main(){
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    inorder(root);

    deletingBST(root, 1);
    cout<<endl;

    inorder(root);

    return 0;
}