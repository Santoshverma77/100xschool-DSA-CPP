#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char x;
    
    cin >> s;
    cin >> x;
    
    string result = "";
    
    // Har character ko check karo
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != x) {
            result += s[i];
        }
    }
    
    cout << result << endl;
    
    return 0;
}