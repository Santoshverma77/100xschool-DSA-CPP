#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    
    if (A == B) {
        cout << "Equal" << endl;
    } else if (A < B) {
        cout << "A" << endl;
    } else {
        cout << "B" << endl;
    }
    
    return 0;
}
