// You are given an array of integers.

// Print the elements of the array in reverse order.

// Input
// First line contains integer 𝑁
//  (1≤𝑁≤105)
//  — size of the array.
// Second line contains 𝑁
//  integers 𝐴1,𝐴2,…,𝐴𝑁
//  (−109≤𝐴𝑖≤109)
// .
// Output
// Print the elements of the array in reverse order.

// Example
// InputCopy
// 5
// 1 2 3 4 5
// OutputCopy
// 5 4 3 2 1

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = N - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}