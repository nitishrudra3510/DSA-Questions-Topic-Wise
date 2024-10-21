#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* prev1) {
        data = data1;
        next = next1;
        back = prev1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* ConvertArray2DLL(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* newprev = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, newprev);
        newprev->next = temp;
        newprev = temp;
    }
    return head;
}

Node* deleteHeadNode(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return nullptr;
    }

    Node* newPrev = head;
    head = head->next;
    head->back = nullptr;
    newPrev->next = nullptr;

    delete newPrev;
    return head;
}

Node* deleteTailNode(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }

    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }

    Node* newTail = tail->back;
    newTail->next = nullptr;
    tail->back = nullptr;

    delete tail;
    return head;
}

Node* deleteKthNode(Node* head, int k) {
    if (head == nullptr) {
        return nullptr;
    }

    Node* temp = head;
    int count = 1;

    while (temp != nullptr && count < k) {
        count++;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position out of bounds." << endl;
        return head;
    }

    Node* prev = temp->back;
    Node* front = temp->next;

    if (prev == nullptr && front == nullptr) {
        delete temp;
        return nullptr;
    } else if (prev == nullptr) {
        return deleteHeadNode(head);
    } else if (front == nullptr) {
        return deleteTailNode(head);
    }

    prev->next = front;
    front->back = prev;

    temp->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {12, 23, 33, 9, 4};
    Node* head = ConvertArray2DLL(arr);

    // head = deleteHeadNode(head);
    // head = deleteTailNode(head);

    int k;
    cout << "Enter a position to delete (1-based index): ";
    cin >> k;
    head = deleteKthNode(head, k);
    print(head);

    return 0;
}