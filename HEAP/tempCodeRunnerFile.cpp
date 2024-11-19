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


    void deletefromHeap(){
        if(size==0){
            cout<<" Nothing is to delete.."<<endl;
            return;
        }

        // step = 1; put last elements to the last elements
        arr[1] = arr[size];

        //remove the last elements
        size--;

        // take root node to its correct positions
        int i = 1;
        while(i<size){
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;

            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[leftIndex], arr[i]);
                i = leftIndex;
            }
            else if(rightIndex<size && arr[i] < arr[rightIndex]){
                swap(arr[rightIndex], arr[i]);
                i = rightIndex;
            }
            else{
                return;
            }
        }
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

    h.deletefromHeap();
    h.print();
    return 0;
}