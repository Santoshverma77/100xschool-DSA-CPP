#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    // Check 1: Length exactly 10
    if (s.length() != 10) {
        cout << "Weak" << endl;
        return 0;
    }
    
    // Flags for checking conditions
    bool hasLower = false;
    bool hasUpper = false;
    bool hasDigit = false;
    bool hasSpecial = false;
    
    // Check each character
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            hasLower = true;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            hasUpper = true;
        } else if (s[i] >= '0' && s[i] <= '9') {
            hasDigit = true;
        } else {
            hasSpecial = true;
        }
    }
    
    // Check if all conditions are met
    if (hasLower && hasUpper && hasDigit && hasSpecial) {
        cout << "Strong" << endl;
    } else {
        cout << "Weak" << endl;
    }
    
    return 0;
}