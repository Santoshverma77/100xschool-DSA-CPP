// You are given an integer matrix of size 𝑛×𝑚
// .

// Your task is to find the maximum element in the entire matrix.

// Input
// The first line contains two integers 𝑛
//  and 𝑚
//  (1≤𝑛,𝑚≤1000
// ). The next 𝑛
//  lines each contain 𝑚
//  integers 𝑎𝑖,𝑗
//  (0≤𝑎𝑖,𝑗≤105
// ), representing the matrix.

// Output
// Print a single integer, the maximum element in the matrix.

// Examples
// InputCopy
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// OutputCopy
// 9

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
    
    // Find maximum
    int maxVal = arr[0][0];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
    }
    
    cout << maxVal << endl;
    
    return 0;
}