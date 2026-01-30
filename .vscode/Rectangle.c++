// You are given the length and breadth of a rectangle. Your task is to calculate its area and perimeter.

// The formulas are:

// Area =
//  length ×
//  breadth
// Perimeter =
//  2×(length+breadth)
// Input
// A single line containing two integers length and breadth (1≤𝚕𝚎𝚗𝚐𝚝𝚑,𝚋𝚛𝚎𝚊𝚍𝚝𝚑≤1000)
// .

// Output
// You are given the length and breadth of a rectangle. Your task is to calculate its area and perimeter.

// The formulas are:

// Area =
//  length ×
//  breadth
// Perimeter =
//  2×(length+breadth)
// Example
// InputCopy
// 5 7
// OutputCopy
// Area = 35
// Perimeter = 24

#include <iostream>
using namespace std;

int main() {
    int length, breadth;
    cin >> length >> breadth;
    cout << "Area = " << length * breadth << endl;
    cout << "Perimeter = " << 2 * (length + breadth) << endl;
    return 0;
}