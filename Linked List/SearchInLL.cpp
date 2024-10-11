// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data1) {
//         data = data1;
//         next = nullptr;
//     }
// };

// int search(Node* head, int x) {
//     int index = 0;
//     while (head != nullptr) {
//         if (head->data == x) {
//             cout << "Yes, " << head->data << " has matched at index: " << index << "!" << endl;
//             return index;
//         }
//         head = head->next;
//         index++;
//     }
//     cout << "No match found." << endl;
//     return -1;
// }

// int main() {
//     Node* head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);
//     head->next->next->next->next = new Node(15);

//     int x;
//     cout << "Enter the number you want to match: ";
//     cin >> x; 

//     search(head, x);
//     return 0;
// }




#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};


int search(Node* head, int x){
    int index = 0;
    while(head!=nullptr){
        
        if(head->data == x){
            cout<<"Search "<<head->data<<"at matched node on index : "<<index<<endl;
            return index;
        }
        head = head->next;
        index++;
    }
    cout<< "Element not matched ";
    return -1;
}
int main() {

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(15);

    int x;
    cout << "Enter the number you want to match: ";
    cin >> x; 

    search(head, x);
    return 0;
}