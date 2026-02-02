// You are given two integers 𝐴
//  and 𝐵
// .

// Find the HCF of 𝐴
//  and 𝐵
//  by writing a function that takes 𝐴
//  and 𝐵
//  as parameters and returns their HCF.

// Input
// The only line contains two integers 𝐴
//  and 𝐵
//  (1≤𝐴,𝐵≤105
// ).

// Output
// Print the HCF of 𝐴
//  and 𝐵
// .

// Example
// InputCopy
// 12 36
// OutputCopy
// 12

#include <iostream>
using namespace std;

int HCF(int A, int B) {
    if (B == 0) return A;
    return HCF(B, A % B);
}

int main() {
    int A, B;
    cin >> A >> B;
    cout << HCF(A, B) << endl;
    return 0;
}