#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    
    long long sum = 0;
    
    // Har digit ko add karo
    for (int i = 0; i < n.length(); i++) {
        sum += (n[i] - '0');
    }
    
    cout << sum << endl;
    
    return 0;
}