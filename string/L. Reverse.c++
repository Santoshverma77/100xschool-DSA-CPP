// You are given a string 𝑆
//  consisting only of lowercase English letters.

// Your task is to reverse the string.

// Input
// The only line contains a string 𝑆
//  (1≤|𝑆|≤1000
// ).

// It is guaranteed that 𝑆
//  consists only of lowercase English letters.

// Output
// Print the reversed string.

// Examples
// InputCopy
// hello
// OutputCopy
// // olleh

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    // Reverse the string
    string reversed = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        reversed += s[i];
    }
    
    cout << reversed << endl;
    
    return 0;
}
