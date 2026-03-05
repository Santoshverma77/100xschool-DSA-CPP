#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            // Lowercase → Uppercase
            s[i] = s[i] - 32;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            // Uppercase → Lowercase
            s[i] = s[i] + 32;
        }
    }
    
    cout << s << endl;
    
    return 0;
}