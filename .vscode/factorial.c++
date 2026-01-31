// You are given an integer 𝑁
// .

// Find the factorial of 𝑁
//  by writing a function that takes 𝑁
//  as a parameter and returns 𝑁!
// , where:
// 𝑁!=1×2×3×⋯×𝑁

// Input
// The first line contains an integer 𝑁
//  (0≤𝑁≤20
// ).

// Output
// Print the value of 𝑁!
// .

// Examples
// InputCopy
// 5
// OutputCopy\
// 120
// InputCopy
// 7
// OutputCopy
// 5040


#include <iostream>
using namespace std;

long long factorial(int N) {
    long long fact = 1;
    for (int i = 1; i <= N; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int N;
    cin >> N;

    cout << factorial(N);
    return 0;
}
