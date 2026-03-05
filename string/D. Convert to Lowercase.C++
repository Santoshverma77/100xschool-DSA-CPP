#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    
    // Uppercase ho toh lowercase me convert karo
    if (c >= 'A' && c <= 'Z') {
        c = c + 32;  // ASCII difference between uppercase and lowercase is 32
    }
    
    cout << c << endl;
    
    return 0;
}