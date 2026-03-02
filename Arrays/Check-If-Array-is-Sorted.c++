// Given an array of 𝑁
//  integers, determine whether it is sorted in ascending order.

// Input
// An array 𝐴1,𝐴2,…,𝐴𝑁
//  is sorted in ascending order if 𝐴𝑖≤𝐴𝑖+1
//  for all 1≤𝑖<𝑁
// .

// Output
// Print YES if the array is sorted in ascending order, otherwise print NO.

// Any letter case is accepted, so yEs, YeS, nO, etc. are also valid.

// Examples
// InputCopy
// 5
// 1 2 3 4 5
// OutputCopy
// YES
// InputCopy
// 4
// 5 3 4 1
// OutputCopy
// NO

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}