// You are given a 2D array of size 𝑛×𝑚
//  containing integers.

// Your task is to print all the elements of the matrix row by row.

// Input
// The first line contains two integers 𝑛
//  and 𝑚
//  (1≤𝑛,𝑚≤1000
// ).

// The next 𝑛
//  lines each contain 𝑚
//  integers, the elements of the matrix. All elements satisfy 0≤𝑎𝑖,𝑗≤105
// .

// Output
// Print all elements of the matrix row by row, separated by spaces.

// Examples
// InputCopy
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// OutputCopy
// 1 2 3 4 5 6 7 8 9 
// InputCopy
// 5 5
// 3 7 1 0 5
// 8 2 6 4 9
// 1 9 3 2 7
// 4 0 8 5 6
// 2 3 7 1 4
// OutputCopy
// 3 7 1 0 5 8 2 6 4 9 1 9 3 2 7 4 0 8 5 6 2 3 7 1 4 

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int arr[n][m];
    
    // Input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    
    // Print all elements in one line (row by row)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
    
    return 0;
}