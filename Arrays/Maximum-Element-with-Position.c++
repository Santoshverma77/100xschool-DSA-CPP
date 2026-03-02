// Given an array of integers, find the maximum element in the array and its position.

// If multiple maximum elements exist, print the position of the first occurrence.

// Input
// First line contains integer 𝑁
//  (1≤𝑁≤105)
//  — size of the array.
// Second line contains 𝑁
//  integers 𝐴1,𝐴2,…,𝐴𝑁
//  (−109≤𝐴𝑖≤109)
// .
// Output
// Print two integers: the maximum element and its 1-based position in the array.

// Example
// InputCopy
// 5
// 1 2 4 3 1
// OutputCopy
// 4 3

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int maxVal = arr[0];
    int maxPos = 1;
    for (int i = 1; i < N; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxPos = i + 1;
        }
    }
    cout << maxVal << " " << maxPos << endl;
    return 0;
}