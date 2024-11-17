#include <climits>
#include <cstddef>
#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* left;
    Node* right;

    Node(int val){
        this->value = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void display(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->value<<" ";
    display(root->left);
    display(root->right);
}

int sum(Node* root){
    if(root == NULL){
        return 0;
    }

    int LST = sum(root->left); //(Left Subtree Total).
    int RST = sum(root->right); //(Right Subtree Total).
    int ans = root->value+LST+RST;
    return ans;
}

int size(Node* root){
    if(root==NULL){
        return 0;
    }

    int left = size(root->left);
    int right = size(root->right);
    return 1+left+right;
}
int maxinTree(Node* root){
    if(root==NULL){
        return INT_MIN;
    }
    int lMax = maxinTree(root->left);
    int rMax = maxinTree(root->right);
    return max(root->value, max(lMax, rMax));
}

int LevelsTree(Node* root){ // levels of trees; 
    if(root==NULL) return 0;
    return 1+ max(LevelsTree(root->left), LevelsTree(root->right));
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);
    Node* h = new Node(80);
    Node* i = new Node(90);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;

    c->left = f;
    c->right = g;

    g->left = h;

    display(a);
    cout<<endl;
    cout<<sum(a);
    cout<<endl;
    cout<<size(a);
    cout<<endl;
    cout<<maxinTree(a);

    cout<<endl;
    cout<<LevelsTree(a);
}