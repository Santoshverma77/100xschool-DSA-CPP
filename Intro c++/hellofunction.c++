// You are given an integer 𝑁
// .

// Write a function that takes 𝑁
//  as a parameter and prints the string I am learning functions exactly 𝑁
//  times, each on a new line.

// Input
// The only line contains an integer 𝑁
//  (1≤𝑁≤1000
// ).

// Output
// Print 𝑁
//  lines. Each line must be exactly:
// Example
// InputCopy
// 3
// OutputCopy
// I am learning functions
// I am learning functions
// I am learning functions

#include <iostream>
using namespace std;

    // Function to print "I am learning functions" N times
    void printHelloFunction(int N) {
        for (int i = 0; i < N; i++) {
            cout << "I am learning functions" << endl;
        }
    }

int main() {
    int N;
    cin >> N;
    printHelloFunction(N);
    return 0;
}