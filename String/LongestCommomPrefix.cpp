#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

string LongestCommonPrefix(vector<string>& str) {
    int n = str.size();
    if (n == 0) return "";
    if (n == 1) return str[0];

    sort(str.begin(), str.end());
    string first = str[0];
    string last = str[n-1];
    string s = "";

    for (int i = 0; i < min(first.size(), last.size()); i++) {
        if (first[i] == last[i]) {
            s += first[i];
        } else {
            return s;
        }
    }

    return s;
}

int main() {
    vector<string> str = {"flower", "flow", "flight"}; // fl is the lowest common prefix because fl is the start of each element
    string result = LongestCommonPrefix(str);
    cout << "Longest common prefix: " << result << endl;
}
