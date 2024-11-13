void method(stack<int>& st) {
//     int n = st.size();
//     int* arr = new int[n]; // Dynamically allocate an array
//     int index = 0;

//     // Transfer elements to the array
//     while (!st.empty()) {
//         arr[index++] = st.top();
//         st.pop();
//     }

//     // Push elements back into the stack in reverse order
//     for (int i = n - 1; i >= 0; i--) {
//         st.push(arr[i]);
//     }

//     delete[] arr; // Free dynamically allocated memory
// }