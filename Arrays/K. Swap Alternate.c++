// K. Swap Alternate
// time limit per test1 second
// memory limit per test256 megabytes
// You are given an array 𝐴
//  of size 𝑛
// . Your task is to swap every pair of alternate elements in the array.

// Input
// The first line contains a single integer 𝑡
//  (1≤𝑡≤100
// ) — the number of test cases.

// Each test case consists of two lines:

// The first line contains an integer 𝑛
//  (0≤𝑛≤105
// ) — the size of the array.
// The second line contains 𝑛
//  integers 𝑎1,𝑎2,…,𝑎𝑛
//  (1≤𝑎𝑖≤109
// ).
// It is guaranteed that the sum of 𝑛
//  over all test cases does not exceed 105
// .

// Output
// For each test case, print the modified array after performing all swaps.

// Examples
// InputCopy
// 1
// 6
// 9 3 6 12 4 32
// OutputCopy
// 3 9 12 6 32 4
// InputCopy
// 2
// 9
// 9 3 6 12 4 32 5 11 19
// 4
// 1 2 3 4
// OutputCopy
// 3 9 12 6 32 4 11 5 19
// 2 1 4 3

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        // Swap alternate pairs (0-1, 2-3, 4-5, ...)
        for (int i = 0; i < n - 1; i += 2) {
            swap(arr[i], arr[i + 1]);
        }
        
        // Print array
        for (int i = 0; i < n; i++) {
            cout << arr[i];
            if (i < n - 1) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}