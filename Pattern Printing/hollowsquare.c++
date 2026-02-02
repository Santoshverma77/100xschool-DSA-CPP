// You are given a positive integer 𝑛
// .

// Print a hollow square pattern consisting of 𝑛
//  rows.

// Input
// The input contains a single integer 𝑛
//  (1≤𝑛≤2⋅103)
// .

// Output
// Print 𝑛
//  lines, as given in the example.

// Examples
// InputCopy
// 6
// OutputCopy
// ******
// *    *
// *    *
// *    *
// *    *
// ******
// InputCopy
// 2
// OutputCopy
// **
// **
// InputCopy
// 8
// OutputCopy
// ********
// *      *
// *      *
// *      *
// *      *
// *      *
// *      *
// ********


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i==0 || i==n-1 || j==0 || j==n-1){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}