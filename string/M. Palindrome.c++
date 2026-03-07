// You are given a string 𝑆
//  consisting only of lowercase English letters.

// A string is called a palindrome if it reads the same from left to right and from right to left.

// Determine whether 𝑆
//  is a palindrome.

// Input
// The only line contains a string 𝑆
//  (1≤|𝑆|≤1000
// ).

// It is guaranteed that 𝑆
//  consists only of lowercase English letters.

// Output
// Print YES if 𝑆
//  is a palindrome, otherwise print NO.

// Examples
// InputCopy
// racecar
// OutputCopy
// YES
// InputCopy
// hello
// OutputCopy
// NO

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    // Check if the string is a palindrome
    bool isPalindrome = true;
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    
    if (isPalindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}

