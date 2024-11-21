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


// reverseArray
#include<iostream>
using namespace std;
void reverse_array(int arr[], int length){
    int low = 0, high = length-1;
    while(low<high){
        int temp = arr[low];
        arr[low]=arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

int main(){
    int arr[4] = {1,2,3,4}; 
    int length = sizeof(arr)/sizeof(arr[0]);

    reverse_array(arr, length);
    for(int i=0; i<length; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}