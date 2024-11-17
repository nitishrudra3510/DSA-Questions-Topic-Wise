
// # find kth largest element
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    // Min-Heap of size k
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < nums.size(); i++) {
        pq.push(nums[i]);

        // Keep the size of the heap to k
        if (pq.size() > k) {
            pq.pop();
        }
    }

    // The top element is the k-th largest
    return pq.top();
}

int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 3;

    cout << "The " << k << "-th largest element is: " << findKthLargest(nums, k) << endl;

    return 0;
}

