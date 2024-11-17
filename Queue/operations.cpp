// #include<iostream>
// #include <queue>
// using namespace std;

// void traversalQueue(queue<int> q){
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

//     cout<<"Element INserted."<<endl;

//     cout<<"Traversing the all elements : "<<endl;
//     traversalQueue(q);

//     // Deletion (dequeue)
//     if(!q.empty()){
//         cout<<"deleting the front element. "<<q.front()<<endl;
//         q.pop();
//     }
//     else{
//         cout<<"Queue is empty element not deleted"<<endl;
//     }


//     // travering after deleting the front elements
//     cout<<" travering after deleting the front elements"<<endl;
//     traversalQueue(q);
// }



// Array implememtation;

#include<iostream>
using namespace std;
#define MAX 100 // maximum 100 element hold in the queue
class Queue{
    private:
    int arr[MAX];
    int front;
    int rear;
    int size;

    public:
    Queue(){
        front = 0;
        rear = -1;
        size = 0;
    }

    bool isEmpty(){
        return size==0;
    }

    bool isFull(){
        return size==MAX;
    }

    void enqueue(int value){
        if(isFull()){
            cout<<"Queue is overFlow, no element will be add."<<endl;
        }

        rear = (rear+1)%MAX;
        arr[rear] = value;

        size++;

        cout<<"Enqueued "<<value<<endl;
    }


    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is underflow, No element will be deleted."<<endl;
        }
        cout<<"Dequeu Element : "<<endl;
        front = (front+1)%MAX;
        size--;
    }

    void traversal(){
        if(isEmpty()){
            cout<<"Queue is not element.."<<endl;
            return;
        }

        cout<<" Queue elements : "<<endl;

        for(int i=0; i<size; i++){
            cout<<arr[(front+i)%MAX]<< " ";
        }

        cout<<endl;
    }
};


int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout<<"Traversing the elements in the queue : "<<endl;
    q.traversal();

    q.dequeue();
    q.dequeue();

    cout<<"Traversal after deleting : "<<endl;

    q.traversal();
    return 0;
}
