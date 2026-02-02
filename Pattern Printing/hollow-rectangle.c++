// Given two integers 𝑛
//  and 𝑚
// , print a hollow rectangle of dimensions 𝑛×𝑚
// .

// Input
// The only line contains two integers 𝑛
//  and 𝑚
//  (1≤𝑛,𝑚≤100
// ).

// Output
// Print the pattern.

// Examples
// InputCopy
// 5 5
// OutputCopy
// *****
// *   *
// *   *
// *   *
// *****
// InputCopy
// 6 9
// OutputCopy
// *********
// *       *
// *       *
// *       *
// *       *
// *********

#include <iostream>
using namespace std;

int main (){
    int n,m;
    cin >> n >> m;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (i==0 || i==n-1 || j==0 || j==m-1){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;   
    }
    return 0;
}