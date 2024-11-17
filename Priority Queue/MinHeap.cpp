#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(10);
    pq.push(20);
    pq.push(40);
    pq.push(5);
    pq.push(15);

    cout << "Elements in ascending order:" << endl;
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}