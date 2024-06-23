// #include<iostream>
// using namespace std;
// void stockPrediction(int price[], int n){
//     int profit = 0;
//     for(int i=1; i<n; i++){
//         if(price[i]>price[i-1]){
//             profit+=(price[i]-price[i-1]);
//         }
//     }

//     cout<<profit<<endl;
// }
// int main(){
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " elements: ";
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     stockPrediction(price, n);

//     // for(int i = 0; i < n; i++){
//     //     cout<<arr[i]<<" "<<endl;
//     // }
//     return 0;
// }


#include<iostream>
using namespace std;

int stockPrediction(int price[], int start, int end) {
    if (end <= start) {
        return 0;
    }
    int profit = 0;
    for (int i = start; i <= end; i++) {
        for (int j = i + 1; j <= end; j++) {
            if (price[j] > price[i]) {
                int current_profit = price[j] - price[i] + stockPrediction(price, start, i - 1) + stockPrediction(price, j + 1, end);
                profit = max(profit, current_profit);
            }
        }
    }
    return profit;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_profit = stockPrediction(arr, 0, n - 1);
    cout << "Maximum profit: " << max_profit << endl;

    return 0;
}
