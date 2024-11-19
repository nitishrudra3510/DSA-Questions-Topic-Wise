#include <iostream>
using namespace std;

class Heap {
    int arr[10];
    int size;

public:
    Heap() {
        arr[0] = -1;
        size = 0;
    }

    void insertAtEnd(int val) {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1) {
            int parent = index / 2;

            if (arr[parent] > arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                return;
            }
        }
    }

    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


        
};

int main() {
    Heap h;
    h.insertAtEnd(55);
    h.insertAtEnd(54);
    h.insertAtEnd(53);
    h.insertAtEnd(50);
    h.insertAtEnd(52);
    h.print();

    
    return 0;
}