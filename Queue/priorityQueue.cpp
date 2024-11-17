// Max-Heap priority queue

// #include<iostream>
// #include <queue>
// using namespace std;

// int main(){
//     priority_queue<int> pq;

//     // push the element into priority queue..
//     pq.push(10);
//     pq.push(20);
//     pq.push(40);

//     while(!pq.empty()){
//         cout<<pq.top() << " ";
//         pq.pop();
//     }

//     return 0;
// }




// MIN_HEAP priority queue..
/*
Priority Queue Declaration:
	•	priority_queue<int, vector<int>, greater<int>> pq;
	•	int is the type of elements in the queue.
	•	vector<int> is the underlying container used to store the elements.
	•	greater<int> is a comparator that ensures the priority queue behaves as a min-heap (smallest element has the highest priority).
// */
// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {

//     priority_queue<int, vector<int>, greater<int>> pq;


//     pq.push(10);
//     pq.push(20);
//     pq.push(40);
//     pq.push(5);
//     pq.push(15);


//     cout << "Elements in ascending order:" << endl;
//     while (!pq.empty()) {
//         cout << pq.top() << " "; // Get the smallest element
//         pq.pop();                // Remove the smallest element
//     }
//     cout << endl;

//     return 0;
// }




// #include <iostream>
// #include <queue>
// #include <vector>

// using namespace std;

// // Define a struct to represent an item
// struct Item {
//     int value;
//     int priority;
// };

// // Define a custom comparator for the priority queue
// struct Compare {
//     bool operator()(const Item& a, const Item& b) {
//         return a.priority > b.priority; // Min-Heap: Smaller priority first
//     }
// };

// int main() {
//     // Create a priority queue with custom comparator
//     priority_queue<Item, vector<Item>, Compare> pq;

//     // Push elements into the priority queue
//     pq.push({10, 3});
//     pq.push({20, 1});
//     pq.push({30, 2});

//     // Process and display elements based on priority
//     while (!pq.empty()) {
//         Item top = pq.top();
//         cout << "Value: " << top.value << ", Priority: " << top.priority << endl;
//         pq.pop();
//     }

//     return 0;
// }



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



// #include <iostream>
// #include <queue>
// #include <vector>
// using namespace std;

// int findKthLargest(vector<int>& nums, int k) {
//     // Create a min-heap using priority_queue
//     priority_queue<int, vector<int>, greater<int>> pq;

//     // Push the first k elements into the priority queue (min-heap)
//     for (int i = 0; i < k; i++) {
//         pq.push(nums[i]);
//     }

//     // Process the rest of the elements in the array
//     for (int i = k; i < nums.size(); i++) {
//         if (pq.top() < nums[i]) {
//             pq.pop();  // Remove the smallest element in the heap
//             pq.push(nums[i]);  // Insert the current element
//         }
//     }

//     // The top of the min-heap will be the k-th largest element
//     return pq.top();
// }

// int main() {
//     vector<int> nums = {3, 2, 1, 5, 6, 4};
//     int k = 3;

//     cout << "The " << k << "-th largest element is: " << findKthLargest(nums, k) << endl;

//     return 0;
// }



// kth smallest elements;

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int findKthSmallest(vector<int>& nums, int k){
    priority_queue<int> pq;

    for(int i=0; i<k; i++){
        pq.push(nums[i]);
    }

    // process the rest of the element;
    for(int i=k; i<nums.size(); i++){
        if(pq.top() > nums[i]){
            pq.pop();
            pq.push(nums[i]);
        }
    }

    return pq.top();
}


int main(){
    vector<int> nums = {3,2,1,5,6,4};

    int k=3;

    cout<<"The "<<k<< "-th smallest element is : "<<findKthSmallest(nums, k)<<endl;

    return 0;
}
