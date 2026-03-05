#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    int j = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            s[j] = s[i];
            j++;
        }
    }
    
    s = s.substr(0, j);
    
    cout << s << endl;
    
    return 0;
}
// ```

// **Time Complexity:** O(n)  
// **Space Complexity:** O(n) for method 1, O(1) for method 3

// **Examples explained:**

// **Example 1:**
// ```
// Input: "abc def g hi"

// Remove all spaces:
// a b c (space) d e f (space) g (space) h i
// ↓
// abcdefghi

// Output: "abcdefghi"
// ```

// **Example 2:**
// ```
// Input: "hello world"

// Remove all spaces:
// h e l l o (space) w o r l d
// ↓
// helloworld

// Output: "helloworld"
// ```

// **More test cases:**
// ```
// Input: "a  b   c" → Output: "abc"
// Input: "   spaces   " → Output: "spaces"
// Input: "nospaces" → Output: "nospaces"