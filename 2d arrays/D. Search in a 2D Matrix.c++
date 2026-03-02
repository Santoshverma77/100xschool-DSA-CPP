#include <iostream>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    
    bool found = false;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int element;
            cin >> element;
            if (element == x) {
                found = true;
            }
        }
    }
    
    if (found) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}