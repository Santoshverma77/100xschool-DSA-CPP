// You are given an array of integers and an integer 𝑋
// .

// Find how many times 𝑋
//  appears in the array.

// Input
// First line contains two integers 𝑁
//  and 𝑋
//  (1≤𝑁≤105,−109≤𝑋≤109)
// .
// Second line contains 𝑁
//  integers 𝐴1,𝐴2,…,𝐴𝑁
//  (−109≤𝐴𝑖≤109)
// .
// Output
// Print a single integer — the number of times 𝑋
//  appears in the array.

// Example
// InputCopy
// 6 3
// 1 5 2 3 7 3
// OutputCopy
// 2

#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}