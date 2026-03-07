// You are given a string 𝑆
//  consisting of English letters and spaces.

// A word is a maximal contiguous sequence of letters.

// It is guaranteed that words are separated by exactly one space, and the first character of 𝑆
//  is not a space.

// Your task is to count the number of words in 𝑆
// .

// Input
// The only line contains the string 𝑆
// .

// It is guaranteed that 1≤|𝑆|≤105
// , and 𝑆
//  consists only of English letters and spaces.

// Output
// Print one integer — the number of words in 𝑆
// .

// Example
// InputCopy
// hello world this is CP
// OutputCopy
// 5

#include <iostream>
#include <string>
using namespace std;    

int main() {
    string s;
    getline(cin, s); // Read the entire line including spaces
    
    int wordCount = 1; // Start with 1 because the first word is not preceded by a space
    for (char c : s) {
        if (c == ' ') {
            wordCount++; // Increment count for each space found
        }
    }
    
    cout << wordCount << endl; // Output the number of words
    
    return 0;
}