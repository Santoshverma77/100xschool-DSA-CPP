// You are given a positive integer 𝑛
// .

// Print a pattern consisting of 𝑛
//  rows, where each row contains exactly two stars ('**').

// Input
// The input contains a single integer 𝑛
//  (1≤𝑛≤2⋅105)
// .

// Output
// Print 𝑛
//  lines. Each line must contain exactly two stars ('**').

// Examples
// InputCopy
// 5
// OutputCopy
// **
// **
// **
// **
// **
// InputCopy
// 3
// OutputCopy
// **
// **
// ** 


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "**" << endl;
    }
    return 0;
}