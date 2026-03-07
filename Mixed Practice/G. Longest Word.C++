#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    int maxLength = 0;
    int currentLength = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            // Letter hai, word length badhao
            currentLength++;
        } else {
            // Space mila, word khatam
            maxLength = max(maxLength, currentLength);
            currentLength = 0;
        }
    }
    
    // Last word ka length check karo
    maxLength = max(maxLength, currentLength);
    
    cout << maxLength << endl;
    
    return 0;
}