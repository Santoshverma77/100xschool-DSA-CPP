// You are given a positive integer 𝑛
// .

// Print a pyramid pattern consisting of 𝑛
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
// 5
// OutputCopy
// *
// **
// ***
// ****
// *****

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
    
}