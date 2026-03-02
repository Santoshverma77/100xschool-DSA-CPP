// You are given a single integer 𝑛
// .

// Construct an array of length 𝑛
//  containing the integers from 1
//  to 𝑛
//  (each exactly once) in the following order:

// 1,3,5,…
//  (increasing order from the left)
// 2,4,6,…
//  (decreasing order from the right)
// Input
// The first line contains a single integer 𝑡
//  (1≤𝑡≤100
// ) — the number of test cases.

// Each of the next 𝑡
//  lines contains a single integer 𝑛
//  (1≤𝑛≤104
// ).

// Output
// Print 𝑛
//  integers — the required array.

// Examples
// InputCopy
// 1
// 5
// OutputCopy
// 1 3 5 4 2 
// InputCopy
// 3
// 6
// 7
// 8
// OutputCopy
// 1 3 5 6 4 2 
// 1 3 5 7 6 4 2 
// 1 3 5 7 8 6 4 2 

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        // Pehle odd numbers print karo (1, 3, 5, ...)
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
        
        // Phir even numbers reverse mein (6, 4, 2 ya 8, 6, 4, 2)
        // Sabse bada even number find karo
        int lastEven = (n % 2 == 0) ? n : n - 1;
        
        for (int i = lastEven; i >= 2; i -= 2) {
            cout << i << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}