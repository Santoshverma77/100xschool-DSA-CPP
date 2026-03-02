// You are given an array of integers.

// Reverse the array in the same array (in-place) and then print it.

// Input
// First line contains integer 𝑁
//  (1≤𝑁≤105)
//  — size of the array.
// Second line contains 𝑁
//  integers 𝐴1,𝐴2,…,𝐴𝑁
//  (−109≤𝐴𝑖≤109)
// .
// Output
// Print the array after reversing it in-place.

// Example
// InputCopy
// 5
// 1 3 7 9 10
// OutputCopy
// 10 9 7 3 1

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}