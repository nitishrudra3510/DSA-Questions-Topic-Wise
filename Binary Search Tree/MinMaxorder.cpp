#include <cstddef>
#include <iostream>
using namespace std;

struct Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Function to find the minimum value node
Node* Minvalue(Node* root) {
    if (root == NULL) {
        return NULL;
    }
    Node* temp = root;
    while (temp->left != NULL) {
        temp = temp->left;
    }
    return temp;
}

// Function to find the maximum value node
Node* maxValue(Node* root) {
    if (root == NULL) {
        return NULL;
    }
    Node* temp = root;
    while (temp->right != nullptr) {
        temp = temp->right;
    }
    return temp;
}

// Function to delete a node from the BST
Node* deleteFromBST(Node* root, int val) {
    if (root == NULL) {
        return root;
    }

    if (root->data == val) {
        // Case 1: No child
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        // Case 2: One child (left)
        if (root->left != NULL && root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Case 2: One child (right)
        if (root->left == NULL && root->right != nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // Case 3: Two children
        if (root->left != NULL && root->right != NULL) {
            int min = Minvalue(root->right)->data;
            root->data = min;
            root->right = deleteFromBST(root->right, min);
            return root;
        }
    } else if (val < root->data) {
        // Traverse the left subtree
        root->left = deleteFromBST(root->left, val);
    } else {
        // Traverse the right subtree
        root->right = deleteFromBST(root->right, val);
    }

    return root;
}

// Preorder Traversal (Root, Left, Right)
void preorder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Inorder Traversal (Left, Root, Right)
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Postorder Traversal (Left, Right, Root)
void postorder(Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

// Function to find the inorder successor
Node* inorderSuccessor(Node* root, int val) {
    Node* successor = NULL;
    
    while (root != NULL) {
        if (root->data <= val) {
            root = root->right;
        } else {
            successor = root;
            root = root->left;
        }
    }
    
    return successor;
}

int main() {
    // Construct the BST
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    // Find the minimum and maximum nodes
    Node* minnode = Minvalue(root);
    Node* maxnode = maxValue(root);

    if (minnode != nullptr) {
        cout << "Minimum node value is: " << minnode->data << endl;
    } else {
        cout << "The tree is empty!" << endl;
    }

    if (maxnode != nullptr) {
        cout << "Maximum node value is: " << maxnode->data << endl;
    } else {
        cout << "The tree is empty!" << endl;
    }

    // Before deletion: Perform and print Preorder, Inorder, and Postorder traversals
    cout << "\nPreorder Traversal: ";
    preorder(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

    // Deleting node with value 3
    root = deleteFromBST(root, 3);

    // After deletion: Perform and print Preorder, Inorder, and Postorder traversals
    cout << "\nPreorder Traversal after deletion: ";
    preorder(root);
    cout << endl;

    cout << "Inorder Traversal after deletion: ";
    inorder(root);
    cout << endl;

    cout << "Postorder Traversal after deletion: ";
    postorder(root);
    cout << endl;

    // Finding and printing inorder successor of node with value 1
    Node* successor = inorderSuccessor(root, 5);
    if (successor != nullptr) {
        cout << "Inorder Successor : " << successor->data << endl;
    } else {
        cout << "No inorder successor found for 1" << endl;
    }

    return 0;
}