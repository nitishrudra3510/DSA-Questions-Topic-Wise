#include <iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();

    set<int> st;

    // Insert elements of vector a into the set
    for (int i = 0; i < n1; i++) {
        st.insert(a[i]);
    }
    // Insert elements of vector b into the set
    for (int i = 0; i < n2; i++) {
        st.insert(b[i]);
    }

    vector<int> result;

    // Transfer elements from the set to the vector
    for (auto it : st) {
        result.push_back(it);
    }

    return result;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> b = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<int> result = sortedArray(a, b);

    cout << "Sorted and unique array:";
    for (int num : result) {
        cout << " " << num << " ";
    }
    cout << endl;

    return 0;
}
