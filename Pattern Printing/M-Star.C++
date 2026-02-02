// You are given two integers 𝑛
//  and 𝑚
// . Your task is to print a rectangle pattern consisting of 𝑛
//  rows and 𝑚
//  columns, where each cell contains a star '*'.

// Input
// The only line contains two integers 𝑛
//  and 𝑚
//  (1≤𝑛,𝑚≤200
// ).

// Output
// Print the pattern.

// Examples
// InputCopy
// 5 6
// OutputCopy
// ******
// ******
// ******
// ******
// ******
// InputCopy
// 3 5
// OutputCopy
// *****
// *****
// *****

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "*";
        }
        cout << endl;
    }
}