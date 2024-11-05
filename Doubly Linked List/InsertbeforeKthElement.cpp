// #include <cstddef>
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int data1, Node* next1 = nullptr, Node* prev1 = nullptr) {
//         data = data1;
//         next = next1;
//         prev = prev1;
//     }
// };

// Node* insertEnd(Node* head, int data) {
//     Node* new_node = new Node(data);
//     if (head == NULL) {
//         return new_node;
//     }

//     Node* temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = new_node;
//     new_node->prev = temp;

//     return head;
// }

// Node* insertBeforeKthElement(Node* head, int k, int data) {
//     Node* new_node = new Node(data);

//     // Case: Insert at the head of the list
//     if (k == 1) {
//         new_node->next = head;
//         if (head != nullptr) {
//             head->prev = new_node;
//         }
//         return new_node;
//     }

//     Node* temp = head;
//     int count = 1;

//     // Traverse to the kth node
//     while (temp != nullptr && count < k) {
//         temp = temp->next;
//         count++;
//     }

//     // If k is larger than the size of the list, just insert at the end
//     if (temp == nullptr) {
//         return insertEnd(head, data);
//     }

//     Node* prev_node = temp->prev;
//     prev_node->next = new_node;
//     new_node->prev = prev_node;
//     new_node->next = temp;
//     temp->prev = new_node;

//     return head;
// }

// void printList(Node* head) {
//     Node* curr = head;
//     while (curr != NULL) {
//         cout << curr->data << " ";
//         curr = curr->next;
//     }
//     cout << "\n";
// }

// int main() {
//     // Create a hardcoded linked list: 2 <-> 3 <-> 4
//     Node* head = new Node(2);
//     Node* temp1 = new Node(3);
//     Node* temp2 = new Node(4);
//     head->next = temp1;
//     temp1->prev = head;
//     temp1->next = temp2;
//     temp2->prev = temp1;

//     // Print the original list
//     cout << "Original Linked List: ";
//     printList(head);

//     // Insert a new node before kth element
//     int k;
//     cout << "Enter the position (1-based): ";
//     cin >> k;
//     int data;
//     cout << "Enter the number: ";
//     cin >> data;

//     head = insertBeforeKthElement(head, k, data);

//     // Print the updated list
//     cout << "After inserting the node: ";
//     printList(head);

//     return 0;
// }





// another method

#include <cstddef>
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1, Node* next1 = nullptr, Node* prev1 = nullptr) {
        data = data1;
        next = next1;
        prev = prev1;
    }
};

Node* insertEnd(Node* head, int data) {
    Node* new_node = new Node(data);
    if (head == NULL) {
        return new_node;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->prev = temp;

    return head;
}

Node* insertBeforeKthElement(Node* head, int k, int data) {
    Node* new_node = new Node(data);

    // Case: Insert at the head of the list
    if (k == 1) {
        new_node->next = head;
        if (head != nullptr) {
            head->prev = new_node;
        }
        return new_node;
    }

    Node* temp = head;
    int count = 1;

    // Traverse to the kth node
    while (temp != nullptr && count < k) {
        temp = temp->next;
        count++;
    }

    // If k is larger than the size of the list, just insert at the end
    if (temp == nullptr) {
        return insertEnd(head, data);
    }

    Node* prev_node = temp->prev;
    prev_node->next = new_node;
    new_node->prev = prev_node;
    new_node->next = temp;
    temp->prev = new_node;

    return head;
}

void printList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << "\n";
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = convert2
}