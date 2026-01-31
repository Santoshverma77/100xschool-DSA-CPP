// You are given an integer 𝑁
// .

// Write a function that prints all factors∗
//  of 𝑁
//  in decreasing order.

// ∗
// A positive integer 𝑑
//  is called a divisor (factor) of 𝑁
//  if 𝑁mod𝑑=0
// .

// Input
// The only line contains an integer 𝑁
//  (1≤𝑁≤105
// ).

// Output
// Print all factors of 𝑁
//  in decreasing order, separated by single spaces.

// Example
// InputCopy
// 12
// OutputCopy
// 12 6 4 3 2 1

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = N; i >= 1; i--) {
        if (N % i == 0) {
            cout << i << " ";
        }
    }
    return 0;
}