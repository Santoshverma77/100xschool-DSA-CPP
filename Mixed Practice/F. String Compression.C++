#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        string compressed = "";
        int n = s.length();
        
        int i = 0;
        while (i < n) {
            char currentChar = s[i];
            int count = 1;
            
            // Count consecutive occurrences
            while (i + 1 < n && s[i + 1] == currentChar) {
                count++;
                i++;
            }
            
            // Add to compressed string
            compressed += currentChar;
            if (count > 1) {
                compressed += to_string(count);
            }
            
            i++;
        }
        
        cout << compressed << endl;
    }
    
    return 0;
}