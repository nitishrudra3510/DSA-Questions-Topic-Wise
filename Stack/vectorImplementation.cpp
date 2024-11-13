#include<iostream>
using namespace std;

class Stack {
    public:
    vector<int> st;

    Stack() {
        
    }

    void push(int val) {
        st.push_back(val);
    }

    void pop() {
        if(st.size()==0) {
            cout << "Stack is empty" << endl;
            return; // Prevent removing an element if stack is empty
        }
        st.pop_back();
    }

    int top() {
        if(st.size()==0) {
            cout << "Stack is empty" << endl;
            return -1; // Prevent removing an element if stack is empty
        }
        return st[st.size()-1];
    }

    int size() {
        return st.size();
    }
};

int main() {
    Stack st;
    cout<<st.top()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60); 

    cout << st.top() << endl;  // Should output 50
    cout << st.size() << endl; // Should output 5
}