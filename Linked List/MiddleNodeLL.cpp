// #include <iostream>
// using namespace std;

// struct ListNode {
// public:
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         int length = 0;
//         ListNode* temp = head;
        
//         // First loop to count the length of the list
//         while(temp != nullptr) {
//             length++;
//             temp = temp->next;
//         }

//         // Calculate the middle position
//         int middle = length / 2;

//         // Move the `temp` pointer to the middle position
//         temp = head;
//         for(int i = 0; i < middle; i++) {
//             temp = temp->next;
//         }

//         // Return the middle node
//         return temp;
//     }
// };

// int main() {
//     // Create a hard-coded linked list:
//     // 10 -> 20 -> 30 -> 40 -> 50 -> 60 
//     ListNode* head = new ListNode(10);
//     head->next = new ListNode(20);
//     head->next->next = new ListNode(30);
//     head->next->next->next = new ListNode(40);
//     head->next->next->next->next = new ListNode(50);
//     head->next->next->next->next->next = new ListNode(60);

//     // Create Solution object and find the middle node
//     Solution sol;
//     ListNode* middle = sol.middleNode(head);

//     // Print the value of the middle node
//     cout << "Middle node value: " << middle->val << endl;

//     return 0;
// }



#include<iostream>
#include<vector>
using namespace std;
class ListNode{
    public:
    int data;
    ListNode* next;

    ListNode(int data1){
        data = data1;
        next = nullptr;
    }
};

int getLength(ListNode* head){
    int length = 0;
    while(head!=NULL){
        length++;
        head = head->next;
    }
    return length;
}

int getMiddle(ListNode* head){
    int length = getLength(head);
    int middle = length/2;
    ListNode* temp = head;
    while(middle--){
        temp = temp->next;
    }
    return temp->data; // return the data of middle elements 
}

int main(){

    // 10 -> 20 -> 30 -> 40 -> 50 -> 60 
    ListNode* head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    head->next->next->next = new ListNode(40);
    head->next->next->next->next = new ListNode(50);
    head->next->next->next->next->next = new ListNode(60);


    cout<<getMiddle(head)<<endl;
    return 0;
}
