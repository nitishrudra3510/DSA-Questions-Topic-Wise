#include<iostream>
#include<vector>  // Added this for using std::vector
using namespace std;

int searchInsert(vector<int>& arr, int x) {
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;  
        if (arr[mid] >= x) {
            high = mid - 1;
            ans = mid;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 2, 4,5, 7};
    int x = 6;
    int ind = searchInsert(arr, x);
    cout << "The index is: " << ind << "\n";
    return 0;
}