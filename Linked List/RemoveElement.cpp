#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head->val == val) {
            head = head->next;
        }
        
        ListNode* temp = head;
        ListNode* prev = nullptr; 
        
        while (temp != nullptr) {
            if (temp->val == val) {
                prev->next = temp->next;
            } else {
                prev = temp;
            }
            temp = temp->next;
        }
        
        return head;
    }
};

// Function to print the linked list
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

// Main function
int main() {
    // Creating the linked list: 1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(6);

    std::cout << "Original list: ";
    printList(head);

    Solution solution;
    head = solution.removeElements(head, 6); // Remove nodes with value 6

    std::cout << "List after removing elements with value 6: ";
    printList(head); // Expected output: 1 2 3 4 5

    // Free memory (not shown here for brevity)
    return 0;
}
