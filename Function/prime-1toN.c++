// You are given an integer 𝑁
// .

// Print all prime numbers from 1
//  to 𝑁
//  in increasing order by writing a function that takes 𝑁
//  as a parameter and prints the required primes.

// Input
// The only line contains an integer 𝑁
//  (1≤𝑁≤103
// ).

// Output
// Print all prime numbers from 1
//  to 𝑁
//  in increasing order, separated by single spaces.

// If there is no prime number in the range, print nothing.

// Example
// InputCopy
// 10
// OutputCopy
// 2 3 5 7

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    return 0;
}