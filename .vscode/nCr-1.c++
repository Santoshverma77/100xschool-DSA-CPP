// You are given two integers 𝑛
//  and 𝑟
// .

// Write a function to compute the binomial coefficient:
// (𝑛𝑟)=𝑛!𝑟!(𝑛−𝑟)!

// Input
// The only line contains two integers 𝑛
//  and 𝑟
//  (0≤𝑟≤𝑛≤10
// ).

// Output
// Print the value of (𝑛𝑟)
// .

// Examples
// InputCopy
// 5 2
// OutputCopy
// 10
// InputCopy
// 10 0
// OutputCopy
// 1

#include <iostream>
using namespace std;

long long fact(int x) {
    long long f = 1;
    for (int i = 1; i <= x; i++) f *= i;
    return f;
}

long long nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int main() {
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r) << endl;
    return 0;
}