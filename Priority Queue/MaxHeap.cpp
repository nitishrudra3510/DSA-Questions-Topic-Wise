// Max-Heap priority queue

#include<iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> pq;

    // push the element into priority queue..
    pq.push(10);
    pq.push(20);
    pq.push(40);

    while(!pq.empty()){
        cout<<pq.top() << " ";
        pq.pop();
    }

    return 0;
}
