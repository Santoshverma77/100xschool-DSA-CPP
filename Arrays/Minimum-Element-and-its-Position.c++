// You are given an array of integers. Find the minimum element in the array and its position.

// If multiple positions contain the minimum value, print the smallest position.

// Input
// First line contains integer 𝑁
//  (1≤𝑁≤105)
//  — size of the array.
// Second line contains 𝑁
//  integers 𝐴1,𝐴2,…,𝐴𝑁
//  (−109≤𝐴𝑖≤109)
// .
// Output
// Print two integers — the minimum value and its position (1-based index).

// Example
// InputCopy
// 6
// 7 3 4 5 3 10
// OutputCopy
// 3 2

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N];
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    int minVal = arr[0];
    int minPos = 1;  // Position 1-indexed hai
    
    for (int i = 1; i < N; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minPos = i + 1;  // i+1 kyunki position 1 se start hoti hai
        }
    }
    
    cout << minVal << " " << minPos << endl;
    return 0;
}
