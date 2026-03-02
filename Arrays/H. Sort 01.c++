// You have been given an integer array of size 𝑁
//  that contains only integers 0
//  and 1
// .

// Print the sorted array of 01.

// Input
// 1≤𝑡≤102
// 0≤𝑁≤105
// Output
// Print the expected array.

// Examples
// InputCopy
// 1
// 7
// 0 1 1 0 1 0 1
// OutputCopy
// 0 0 0 1 1 1 1
// InputCopy
// 2
// 8
// 1 0 1 1 0 1 0 1
// 5
// 0 1 0 1 0
// OutputCopy
// 0 0 0 1 1 1 1 1
// 0 0 0 1 1

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        
        // Count 0s
        int countZero = 0;
        for (int i = 0; i < N; i++) {
            if (arr[i] == 0) {
                countZero++;
            }
        }
        
        // Print all 0s first, then all 1s
        for (int i = 0; i < countZero; i++) {
            cout << 0 << " ";
        }
        for (int i = countZero; i < N; i++) {
            cout << 1 << " ";
        }
        cout << endl;
    }
    
    return 0;
}
