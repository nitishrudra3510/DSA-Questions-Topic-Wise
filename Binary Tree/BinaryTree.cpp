#include <cstddef>
#include <iostream>
#include <queue> // Include for using queue
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* builttree(node* root) {
    cout << "Enter the data: ";
    int data;
    cin >> data;

    if (data == -1) { // Base case for recursion
        return NULL;
    }

    root = new node(data); // Create a new node

    cout << "Enter data for inserting in the left of " << data << endl;
    root->left = builttree(root->left);

    cout << "Enter data for inserting in the right of " << data << endl;
    root->right = builttree(root->right); // Fix here to update root->right

    return root;
}

void orderlevelTraversal(node* root) {
    if (root == NULL) { // Handle empty tree
        return;
    }

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        node* temp = q.front();
        
        q.pop();

        if(temp==NULL){
            // old level complete traversal ho chuka hai..
            cout<<endl;
            if(!q.empty()){
                //queue still has some child nodes
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " "; // Print current node's data
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
    cout << endl;
}

void inorder(node* root){
    // base cases
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<< root->data << " ";
    inorder(root->right);

}

void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


void postorder(node* root){
    if(root==nullptr){
        return;
    }

    postorder(root->left);
    preorder(root->right);
    cout<<root->data<<" ";
}
int main() {
    node* root = NULL;

    // Creating a tree
    // Example Input: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -12 -1 -1
    root = builttree(root);

    cout << "Level Order Traversal of the Tree: " << endl;
    orderlevelTraversal(root);

    cout<<" Inorder tarversal are : "<<endl;
    inorder(root);
    cout<<endl;

    cout<<" Preorder tarversal are : "<<endl;
    preorder(root);
    cout<<endl;

    cout<<" Postorder tarversal are : "<<endl;
    postorder(root);
    cout<<endl;
    
    return 0;
}



// reversed ordered traversal;;

