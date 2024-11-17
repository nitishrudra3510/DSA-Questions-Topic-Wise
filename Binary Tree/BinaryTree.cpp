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
    root->right = builttree(root->right);

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

        if (temp == NULL) {
            // Old level complete
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
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

void inorder(node* root) {
    if (root == NULL) {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root) {
    if (root == nullptr) {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void buildFromLevelOrder(node* &root) {
    queue<node*> q; // Queue of nodes
    cout << "Enter data for root: ";
    int data;
    cin >> data;

    if (data == -1) {
        root = NULL;
        return;
    }

    root = new node(data);
    q.push(root);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for " << temp->data << ": ";
        int leftData;
        cin >> leftData;

        if (leftData != -1) {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for " << temp->data << ": ";
        int rightData;
        cin >> rightData;

        if (rightData != -1) {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main() {
    node* root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -12 -1 -1
    // Build tree using level-order input
    buildFromLevelOrder(root);

    // Level Order Traversal
    cout << "Level Order Traversal of the Tree:" << endl;
    orderlevelTraversal(root);

    // Build tree using recursive input (uncomment to use)
    /*
    root = builttree(root);
    cout << "Level Order Traversal of the Tree:" << endl;
    orderlevelTraversal(root);
    */

    // Inorder Traversal
    cout << "Inorder Traversal:" << endl;
    inorder(root);
    cout << endl;

    // Preorder Traversal
    cout << "Preorder Traversal:" << endl;
    preorder(root);
    cout << endl;

    // Postorder Traversal
    cout << "Postorder Traversal:" << endl;
    postorder(root);
    cout << endl;

    return 0;
}



// reversed ordered traversal;;

