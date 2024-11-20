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

#include<iostream>
using namespace std;
void Traversal(queue<int> q){
    cout<<"Queue Element : ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    cout<<endl;
}
int main(){
    queue<int> q;

    cout<<"Inserting element are : "<<endl;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<"Inserting elements are : "<<endl;

    cout<<"Traversing all the elements : "<<endl;
    Traversal(q);
    // deletion 
    if(!q.empty()){
        cout<<"Deleting the front element.."<<endl;
        q.pop();
    }
    else{
        cout<<"Queue is empty element not deleted"<<endl;
    }

    // traversal after deleting :
    Traversal(q);

}