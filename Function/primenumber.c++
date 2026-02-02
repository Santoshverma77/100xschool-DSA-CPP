// You are given an integer 𝑁
// .

// Write a function that checks whether 𝑁
//  is a prime number.

// Print Prime if 𝑁
//  is prime, otherwise print Not Prime.

// Input
// The only line contains an integer 𝑁
//  (1≤𝑁≤105
// ).

// Output
// Print Prime or Not Prime.

// Examples
// InputCopy
// 17
// OutputCopy
// Prime
// InputCopy
// 4
// OutputCopy
// Not Prime

#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    if (N % 2 == 0) {
        cout << "Not Prime" << endl;
    }
    else {
        cout << "Prime" << endl;
    }
    return 0;
}