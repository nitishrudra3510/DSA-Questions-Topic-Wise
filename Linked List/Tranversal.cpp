#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}
// int main() {
//     int arr_data[] = {2, 3, 4, 5}; // Use a regular array
//     vector<int> arr(arr_data, arr_data + sizeof(arr_data) / sizeof(arr_data[0])); // Initialize vector from array

//     Node* head = convertArr2LL(arr);

//     // Traversal
//     Node* temp = head;
//     while (temp) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl; // Print newline after the list

//     return 0; // Exit the program
// }


int main() {
    vector<int> arr = {2, 3, 4, 5}; // Sample array

    Node* head = convertArr2LL(arr);

    // Traversal
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl; // Print newline after the list

    return 0; // Exit the program
}

