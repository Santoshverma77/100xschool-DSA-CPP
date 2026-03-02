// Given an array of integers and a value 𝑋
// , determine whether 𝑋
//  is present in the array.

// Print "YES" if it is present, otherwise print "NO".

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
// Print "YES" if 𝑋
//  is present in the array, otherwise print "NO".

// Examples
// InputCopy
// 5 7
// 1 7 5 3 2
// OutputCopy
// YES
// InputCopy
// 4 2
// 1 4 3 7
// OutputCopy
// NO

#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } 
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}

