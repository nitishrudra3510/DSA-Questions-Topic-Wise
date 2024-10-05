#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        vector<char> v;

        // Step 1: Copy characters into vector
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                v.push_back(s[i]);
            } else {
                // Only push a space if the last character in the vector is not already a space
                if (v.size() > 0 && v.back() != ' ') {
                    v.push_back(' ');
                }
            }
        }

        // Step 2: Reverse the entire vector
        reverse(v.begin(), v.end());

        // Step 3: Construct the final string
        string result;
        for (int i = 0; i < v.size(); i++) {
            // If we encounter a space, we should check if the next character is also a space
            if (v[i] == ' ' && (i + 1 < v.size() && v[i + 1] == ' ')) {
                continue; // Skip this space
            }
            result += v[i]; // Append character to result
        }

        return result;
    }
};

int main() {
    Solution solution;
    string input = "hello world";
    string result = solution.reverseWords(input);
    cout << result << endl; // Output: "world hello"
    return 0;
}
