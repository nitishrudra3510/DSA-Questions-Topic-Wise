#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* temp = head;
        
        // First loop to count the length of the list
        while(temp != nullptr) {
            length++;
            temp = temp->next;
        }

        // Calculate the middle position
        int middle = length / 2;

        // Move the `temp` pointer to the middle position
        temp = head;
        for(int i = 0; i < middle; i++) {
            temp = temp->next;
        }

        // Return the middle node
        return temp;
    }
};

// Example usage
int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution solution;
    ListNode* middle = solution.middleNode(head);

    std::cout << "The value of the middle node is: " << middle->val << std::endl;

    // Clean up the linked list
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}