#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char c1, c2;
    
    cin >> s;
    cin >> c1 >> c2;
    
    // Har character ko check karo aur replace karo
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c1) {
            s[i] = c2;
        }
    }
    
    cout << s << endl;
    
    return 0;
}