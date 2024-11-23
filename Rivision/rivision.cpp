// // queue implemtation in array..
// #include<iostream>
// using namespace std;
// #define n 20

// class MyQueue{
//     public:
//     int* arr;
//     int front;
//     int back;

//     MyQueue(){
//         arr = new int[n];
//         front = -1;
//         back = -1;
//     }

//     int push(int x){
//         if(back==n-1){
//             cout<<"Queue is overflow"<<endl;
//         }

//         back++;
//         arr[back] = x;

//         if(front==-1){
//             front++;
//         }
//     }

//     void pop(){
//         if(front==-1 || front > back){
//             cout<<" NO element in Queue..";
//             return;
//         }

//         front++;
//     }

//     int peek(){
//         if(front==-1 || front > back){
//             cout<<"No element in Queue.."<<endl;
//             return -1;
//         }
//         return arr[front];
//     }

//     bool empty(){
//         if(front==-1 || front > back){
//             return true;
//         }
//         return false;
//     }
// };
// int main(){
//     MyQueue q;
//     q.push(1);
//     q.push(3);
//     q.push(4);

    
//     cout<<" Front element : "<<q.peek() << endl;
//     q.pop();

//     cout<<"Front element after pop : "<<q.peek()<<endl;
//     q.pop();

//     cout << "Front element after pop: " << q.peek() << endl;
//     q.pop();

//     cout << "Front element after pop: " << q.peek() << endl;
//     q.pop();

//     cout << "It will print 1 then Empty or 0 then NotEmpty() : " << q.empty() << endl;
//     return 0;
// }



// // queue linked list emplementation
// #include <cstddef>
// #include<iostream>
// using namespace std;
// class Node{
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// class Queue{
//     public:
//     Node* front;
//     Node* back;

//     Queue(){
//         front = NULL;
//         back = NULL;
//     }

//     void push(int x){
//         Node* n = new Node(x);
//         if(front==NULL){
//             back=n;
//             front=n;
//             return;
//         }
//         back->next = n;
//         back = n;
//     }

//     void pop(){
//         if(front==NULL){
//             cout<<"Queue is underflow";
//             return;
//         }
//         Node* todelete = front;
//         front = front->next;

//         delete todelete;
//     }

//     int peek(){
//         if(front==NULL){
//             cout<<"Queue is underflow.."<<endl;
//             return -1;
//         }
//         return front->data;
//     }
// };
// int main(){
//     Queue q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);

//     cout<<q.peek()<<endl;
//     q.pop();

//     cout<<q.peek()<<endl;
//     q.pop();

//     cout<<q.peek()<<endl;
//     q.pop();

//     cout<<q.peek()<<endl;
//     q.pop();

//     cout<<q.empty()<<endl;

//     return 0;
// }



// operations : 

// #include<iostream>
// using namespace std;
// void Traversal(queue<int> q){
//     cout<<"Queue Element : ";
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }

//     cout<<endl;
// }
// int main(){
//     queue<int> q;

//     cout<<"Inserting element are : "<<endl;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);

//     cout<<"Inserting elements are : "<<endl;

//     cout<<"Traversing all the elements : "<<endl;
//     Traversal(q);
//     // deletion 
//     if(!q.empty()){
//         cout<<"Deleting the front element.."<<endl;
//         q.pop();
//     }
//     else{
//         cout<<"Queue is empty element not deleted"<<endl;
//     }

//     // traversal after deleting :
//     Traversal(q);

// }




// #include<iostream>
// using namespace std;

// #define MAX 100

// class Queue{
//     public:
//     int arr[MAX];
//     int front;
//     int rear;
//     int size;

//     public:
//     Queue(){
//         front = 0;
//         rear = -1;
//         size = 0;
//     }

//     bool isEmpty(){
//         return size==0;
//     }

//     bool isFull(){
//         return size==MAX;
//     }

//     void enqueue(int value){
//         if(isFull()){
//             cout<<"Queue is overflow, no element will be added.."<<endl;
//         }

//         rear = (rear+1)%MAX;
//         arr[rear] = value;
//         size++;

//         cout<<"Enqueued "<<value<<endl;
//     }


//     void dequeue(){
//         if(isEmpty()){
//             cout<<"Queue us underflow, No element will be deleted.."<<endl;
//         }

//         front = (front+1)%MAX;
//         size--;
//     }
    
//     void traversal(){
//         if(isEmpty()){
//             cout<<"queue is not element.."<<endl;
//             return;
//         }

//         cout<<"Queue elements : "<<endl;

//         for(int i=0; i<size; i++){
//             cout<<arr[(front+i)%MAX]<<" ";
//         }

//         cout<<endl;
//     }
// };


// int main(){
//     Queue q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);
//     q.enqueue(50);

//     cout<<"Traversing the elements in the queue : "<<endl;
//     q.traversal();


//     q.dequeue();
//     q.dequeue();

//     cout<<"Traversal after deleting : "<<endl;

//     q.traversal();
//     return 0;
// }



// min heap prioority queue

// #include <functional>
// #include<iostream>
// #include<queue>

// using namespace std;

// int main(){
//     priority_queue<int, vector<int>, greater<int>> pq;

//     pq.push(10);
//     pq.push(20);
//     pq.push(40);
//     pq.push(5);
//     pq.push(15);

//     // assending order
//     while(!pq.empty()){
//         cout<<pq.top()<<" ";
//         pq.pop();
//     }
//     cout<<endl;
// }


// find the kth largest element;

// #include <functional>
// #include<iostream>
// #include<queue>
// #include<vector>

// using namespace std;

// int findKthLargest(vector<int>& nums, int k){
//     // Min-Heap of size k
//     priority_queue<int, vector<int>, greater<int>> pq;

//     for(int i=0; i<nums.size(); i++){
//         pq.push(nums[i]);

//         // keep the size of the heap to k
//         if(pq.size() > k){
//             pq.pop();
//         }
//     }

//     // the top element is k-th largest;
//     return pq.top();


// }

// int main() {
//     vector<int> nums = {3, 2, 1, 5, 6, 4, 10, 11, 23};
//     int k = 3;

//     cout << "The " << k << "-th largest element is: " << findKthLargest(nums, k) << endl;

//     return 0;
// }





/// Array : 

// #include<iostream>
// #include<algorithm>
// using namespace std;
// void issort(int arr[], int n){
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[i]>arr[i+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         } 
//     }
    
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     issort(arr, n);

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

//     cout<<endl;

//     return 0;
// }


// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//    sort(arr, arr+n);

//    for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//    }
//    cout<<endl;

//    sort(arr, arr+n, greater<int>());

//    for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//    }
// }


// #include<iostream>
// using namespace std;

// void frequencySorted(int arr[], int n){
//     int frequency = 1;
//     for(int i=1; i<n; i++){
//         if(arr[i]==arr[i-1]){
//             frequency++;
//         }
//         else{
//             cout<<arr[i-1]<<" "<<frequency<<endl;
//             frequency = 1;
//         }
//     }
//     cout<<arr[n-1]<<" "<<frequency<<endl;
// }

// int main(){
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " elements (sorted): ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     frequencySorted(arr, n);
//     return 0;
// }



// #include<iostream>
// using namespace std;
// void frequency(int arr[], int n){
//     int frequecy = 1;
//     for(int i=1; i<n; i++){
//         if(arr[i]==arr[i-1]){
//             frequecy++;
//         }
//         else{
//             cout<<frequecy;
//             frequecy=1;
//         }
//     }

//     cout<<frequecy<<" ";
// }
// int main(){
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " elements (sorted): ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     frequency(arr, n);
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int frequency(int arr[], int n){
//     int frequecy = 1;
//     for(int i=1; i<n; i++){
//         if(arr[i]==arr[i-1]){
//             frequency
//         }
//     }
// }
// int main(){
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " elements (sorted): ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     frequency(arr, n);
//     return 0;
// }



// #include <iostream>
// using namespace std;

// void mostFrequentElement(int arr[], int n) {
//     int maxFrequency = 0, mostFrequent = arr[0];

//     for (int i = 0; i < n; i++) {
//         int frequency = 1;

//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 frequency++;
//             }
//         }

//         if (frequency > maxFrequency) {
//             maxFrequency = frequency;
//             mostFrequent = arr[i];
//         }
//     }

//     cout << "Element with the highest frequency: " << mostFrequent << endl;
//     cout << "Frequency: " << maxFrequency << endl;
// }

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     mostFrequentElement(arr, n);
//     return 0;
// }


// #include<iostream>
// using namespace std;

// void RotateLeft(int arr[], int n){
//     int temp = arr[0];
//     for(int i=0; i<n; i++){
//         arr[i] = arr[i+1];
//     }

//     arr[n-1] = temp;
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     RotateLeft(arr, n);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// leftrotation of Dth element;

// #include<iostream>
// using namespace std;

// void RotateLeftOne(int arr[], int n){
//     int temp = arr[0];
//     for(int i=0; i<n; i++){
//         arr[i] = arr[i+1];
//     }

//     arr[n-1] = temp;
// }


// void RotateLeftByD(int arr[], int n, int d){
//     for(int i=0; i<d; i++){
//         RotateLeftOne(arr, n);
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     RotateLeftByD(arr, n,3);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }




// #include<iostream>
// using namespace std;

// void RotateLeftD(int arr[], int n, int d){
//     int temp[d];
//     for(int i=0; i<d; i++){
//         temp[i] = arr[i];
//     }

//     for(int i=d; i<n; i++){
//         arr[i-d] = arr[i];
//     }

//     for(int i=0; i<d; i++){
//         arr[n-d+i] = temp[i];
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     RotateLeftD(arr, n, 3);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// using namespace std;

// int MaximumDifferenceBruteForce(int arr[], int n) {
//     int maxDiff = arr[1] - arr[0];  // Initialize with the difference of the first two elements.
    
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             maxDiff = max(maxDiff, arr[j]-arr[i]);
//         }
//     }

//     return maxDiff;
// }

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Max Difference (Brute Force): " << MaximumDifferenceBruteForce(arr, n) << endl;
//     return 0;
// }


// #include <algorithm>
// #include <functional>
// #include<iostream>
// using namespace std;
// void RemoveDuplicate(int arr[], int n){
//     int temp[n];
//     temp[0] = arr[0];
//     int res = 1;
//     for(int i=1; i<n; i++){
//         if(arr[i]!=arr[res-1]){
//             arr[res] = arr[i];
//             res++;
//         }
//     }

//     for(int i=0; i<res; i++){
//         cout<<arr[i]<<" ";
//     }

    
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     sort(arr, arr+n, greater<int>());
//     RemoveDuplicate(arr, n);
    
//     // for(int i=0;i<size; i++){
//     //     cout<<arr[i]<<" ";
//     // }

//     return 0;
// }


// // reverseArray
// #include<iostream>
// using namespace std;
// void reverse_array(int arr[], int length){
//     int low = 0, high = length-1;
//     while(low<high){
//         int temp = arr[low];
//         arr[low]=arr[high];
//         arr[high] = temp;
//         low++;
//         high--;
//     }
// }

// int main(){
//     int arr[4] = {1,2,3,4}; 
//     int length = sizeof(arr)/sizeof(arr[0]);

//     reverse_array(arr, length);
//     for(int i=0; i<length; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// binary search

// #include<iostream>
// using namespace std;
// int bsearch(int arr[], int n,int x){
//     int low = 0; 
//     int high = n-1;

//     while(low<=high){
//         int mid = (low+high)/2;

//         if(arr[mid]==x){
//             return mid;
//         }
//         else if(arr[mid]>x){
//             high = mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }

//     return -1;
// }
// int main(){
//     int n = 5;
//     int arr[] = {4, 3, 5, 1, 6};
//     int x = 1;

//     // // Step 1: Sort the array
//     sort(arr, arr + n);

//     // Output the sorted array (optional for debugging)
//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // Step 2: Perform binary search
//     int result = bsearch(arr, n, x);

//     // Step 3: Output the result
//     if (result != -1) {
//         cout << "Element found at index: " << result << endl;
//     } else {
//         cout << "Element not found." << endl;
//     }

// }



//  linked list

// #include <cstddef>
// #include<iostream>
// #include <new>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     // constructor
//     Node(int data1){
//         data = data1;
//         next = NULL;
//     }
// };


// Node* Array2LL(vector<int> &arr){
//     if(arr.size() == 0){
//         return nullptr;

//         Node* head = new Node(arr[0]);

//         Node* mover = head;

//         for(int i=0; i<arr.size(); i++){
//             Node* temp = new Node(arr[i]);
//             mover->next = temp;
//             mover = temp;
//         }

//         mover->next = NULL;

//         return head;
//     }
// }

// int main(){
//     vector<int> arr = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

//     Node* head = Array2LL(arr);

//     Node* current = head;
//     while(current != nullptr){
//         cout<<current->data<<" ";
//         current = current->next;
//     }
// }



// // singly linked list;
// #include <cstddef>
// #include <iostream>
// using namespace std;

// struct Node {
// public:
//     int data;
//     Node* next;

//     Node(int data1) {
//         data = data1;
//         next = nullptr;
//     }
// };

// Node* insertAtHead(Node* head, int data1) {
//     Node* new_node = new Node(data1);
//     new_node->next = head; 
//     head = new_node;
//     return head;
// }

// Node* insertAtTail(Node* head, int data) {
//     Node* temp = new Node(data);

//     if (head == nullptr) {
//         return temp; // If the list is empty, make the new node the head
//     }

//     Node* current = head;
//     while (current->next != nullptr) {
//         current = current->next;
//     }

//     current->next = temp;
//     return head;
// }

// Node* insertAtPosition(Node* head, int position, int data1) {
//     Node* new_node = new Node(data1);

//     if (position == 1 || head == nullptr) { // Insert at head if position is 1 or list is empty
//         new_node->next = head;
//         return new_node;
//     }

//     Node* temp = head;
//     for (int i = 1; i < position - 1 && temp != nullptr; i++) {
//         temp = temp->next;
//     }

//     if (temp == nullptr) {
//         cout << "Position out of bounds. Appending at the end." << endl;
//         return insertAtTail(head, data1);
//     }

//     new_node->next = temp->next;
//     temp->next = new_node;
//     return head;
// }

// void printList(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// Node* deleteNodeAtHead(Node* head){
//     if (head == nullptr) {
//         return nullptr;
//     }
//     Node* temp = head;
//     head = head->next;
//     delete temp;  // Delete the old head
//     return head;
// }

// Node* deleteAtTail(Node* head){
//     if (head == nullptr) {
//         return head; 
//     }

//     if (head->next == nullptr) {
//         delete head;  // Only one node in the list
//         return nullptr;
//     }

//     Node* temp = head;  
//     while (temp->next->next != nullptr) {
//         temp = temp->next;
//     }

//     delete temp->next;  // Delete last node
//     temp->next = nullptr;
//     return head;
// }

// Node* deleteAtSpecific(Node* head, int position){
//     if (head == nullptr) {
//         cout << "List is empty!" << endl;
//         return head;
//     }

//     // Deleting the head node
//     if (position == 1) {
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//         return head;
//     }

//     int count = 1; Node* temp = head; Node* prev = nullptr;

//     while(temp!=NULL){
//         if(count==position){
//             prev->next = prev->next->next;
//             delete temp;
//         }
//         prev = temp;
//         temp = temp->next;
//         count++;
//     }

//     return head;
    
// }
// int getLength(Node* head) {
//     int length = 0;
//     while (head != nullptr) {
//         length++;
//         head = head->next;
//     }
//     return length;  // Correct placement of return
// }

// // Function to get the middle node's data
// int getMiddle(Node* head) {
//     if (head == nullptr) {
//         cout << "The list is empty!" << endl;
//         return -1;  // Indicates an empty list
//     }

//     int length = getLength(head);
//     int middle = length / 2;  // Middle index

//     Node* temp = head;
//     while (middle--) {
//         temp = temp->next;
//     }

//     return temp->data;
// }

// int main() {
//     Node* head = new Node(2);
//     head->next = new Node(12);
//     head->next->next = new Node(15);
//     head->next->next->next = new Node(20);

//     cout << "Initial List: ";
//     printList(head);

//     // Insert 10 at the head
//     head = insertAtHead(head, 10);
//     cout << "After inserting 10 at head: ";
//     printList(head);

//     // Insert 25 at the tail
//     head = insertAtTail(head, 25);
//     cout << "After inserting 25 at tail: ";
//     printList(head);

//     // Insert 30 at position 3
//     head = insertAtPosition(head, 3, 30);
//     cout << "After inserting 30 at position 3: ";
//     printList(head);

//     // Insert 5 at position 1
//     head = insertAtPosition(head, 1, 5);
//     cout << "After inserting 5 at position 1: ";
//     printList(head);

//     // Insert 40 at position 10 (out of bounds)
//     head = insertAtPosition(head, 10, 40);
//     cout << "After attempting to insert 40 at position 10: ";
//     printList(head);

//     // Deleting nodes
//     head = deleteNodeAtHead(head);
//     cout << "After deleting node at head: ";
//     printList(head);

//     head = deleteAtTail(head);
//     cout << "After deleting node at tail: ";
//     printList(head);

//     head = deleteAtSpecific(head, 3);
//     cout << "After deleting node at position 3: ";
//     printList(head);
//     cout<<getLength(head);
//     cout<<getMiddle(head)<<endl;

//     return 0;
// }



// double linked list

// #include <cstddef>
// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int data1)
//     {
//         data = data1;
//         next = NULL;
//         prev = NULL;
//     }
// };
// void printList(Node* head){
//     Node* curr = head;
//     while(curr!=NULL){
//         cout<<curr->data<<" ";
//         curr = curr->next;
//     }

//     cout<<endl;
// }
// Node* insertAtHead(Node* head, int data1){
//     Node* new_node = new Node(data1);

//     new_node->next = head;

//     if(head!=NULL){
//         head->prev = new_node;
//     }
//     return new_node;
// }

// Node* insertAtTail(Node* head, int data1){
//     Node* new_node = new Node(data1);
//     if(head==NULL){
//         return new_node;
//     }

//     Node* temp = head;
//     while(temp->next!=nullptr){
//         temp = temp->next;
//     }

//     temp->next = new_node;
//     new_node->prev = temp;
//     new_node->next = nullptr;

//     return head;
// }
// Node* insertAtSpecificPos(Node* head, int position, int data){
//     Node* new_node = new Node(data);

//     if(position == 1){
//         new_node->next = head;

//         if(head!=NULL){
//             new_node->prev = head;
//         }
//         head = new_node;
//         return head;
//     }
//     Node* curr = head;
//     int count=1;
//     while(curr!=NULL && count<position){
//         count++;
//         curr = curr->next;
//     }
   
//     new_node->prev = curr;
    
//     new_node->next = curr->next;

   
//     curr->next = new_node;

   
//     if(new_node->next!=NULL){
//         new_node->next->prev = new_node;
//     }

//     return head;
// }


// Node* deleteHeadNode(Node* head){
//     if(head==nullptr || head->next == nullptr){
//         return nullptr;
//     }

//     Node* prev = head;
//     head = head->next;
//     head->prev = nullptr;
//     prev->next = nullptr;

//     delete prev;
//     return head;
// }

// Node* deleteAtTail(Node* head){
//     if(head==NULL){
//         return nullptr;
//     }

//     if(head->next==NULL){
//         delete head;
//         return nullptr;
//     }

//     Node* temp = head;

//     while(temp->next != NULL){
//         temp = temp->next;
//     }

//     Node* newTail = temp->prev;
//     newTail->next = nullptr;
//     temp->prev = nullptr;

//     delete temp;

//     return head;
    
// }


// int main(){
//     Node* head = new Node(2);
//     Node* temp1 = new Node(3);
//     Node* temp2 = new Node(4);
//     head->next = temp1;
//     temp1->prev = head;
//     temp1->next = temp2;
//     temp2->prev = temp1;

//   	// Print the original list
//     cout << "Original Linked List: ";
//     printList(head);

//     // Insert a new node at the front of the list
//     head = insertAtHead(head, 1);

//     head = insertAtTail(head, 5);

//     head = insertAtSpecificPos(head, 3, 6);
//     // Print the updated list
//   	cout << "After inserting Node 1 at the front: ";
//     printList(head);
// }


// #include<iostream>
// using namespace std;

// class Heap{
//     int arr[10];
//     int size;

//     public:
//     Heap(){
//         arr[0] = -1;
//         size = 0;
//     }


//     void insertAtEnd(int val){
//         size = size+1;

//         int index = size;
//         arr[index]= val;

//         while(index>1){
//             int parent = index/2;

//             if(arr[parent] > arr[index]){
//                 swap(arr[parent], arr[index]);
//                 index = parent;
//             }
//         }
//     }

//     void print(){
//         for(int i=1; i<=size; i++){
//             cout<<arr[i]<<" ";
//         }

//         cout<<endl;
//     }
// };

// int main(){

//     Heap h;
//     h.insertAtEnd(55);
//     h.insertAtEnd(54);
//     h.insertAtEnd(53);
//     h.insertAtEnd(50);
//     h.insertAtEnd(52);
//     h.print();

    
//     return 0;
//}


// void heapify(int arr[], int n, int i){
//     int largest = i;
//     int leftIndex = 2*i+1;
//     int rightINdex = 2*i+2;

//     if(leftIndex < n && arr[leftIndex] > arr[largest]){
//         largest = leftIndex;
//     }

//     if(rightINdex < n && arr[rightINdex] > arr[largest]){
//         largest = rightINdex;
//     }

//     if(largest!=i){
//         swap(arr[i], arr[largest]);
//         heapify(arr, n-1, largest);
//     }
// }



// int heapSort(int arr[], int n){
//     int size = n;
//     while(size > 1){
//         swap(arr[size], arr[1]);
//         size--;

//         heapify(arr, size, 1);
//     }
// }


// #include <iostream>
// #include <utility>
// using namespace std;

// void heapify(int arr[], int n, int i) {
//     int largest = i;
//     int leftIndex = 2 * i + 1;
//     int rightIndex = 2 * i + 2;

//     if (leftIndex < n && arr[leftIndex] > arr[largest]) {
//         largest = leftIndex;
//     }

//     if (rightIndex < n && arr[rightIndex] > arr[largest]) {
//         largest = rightIndex;
//     }

//     if (largest != i) {
//         swap(arr[i], arr[largest]);
//         heapify(arr, n, largest);
//     }
// }

// int heapSort(int arr[], int n){
//     int size = n;
//     while(size > 1){
//         //step 1 : swap
//         swap(arr[size], arr[1]);
//         size--;

//         // heapify ; 
//         heapify(arr, n, 1);
//     }
// }
// int main() {
//     int arr[] = {4, 10, 3, 5, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = n / 2 - 1; i >= 0; i--) {
//         heapify(arr, n, i);
//     }

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }