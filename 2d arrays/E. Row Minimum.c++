#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        int minElement = INT_MAX;
        
        for (int j = 0; j < m; j++) {
            int element;
            cin >> element;
            if (element < minElement) {
                minElement = element;
            }
        }
        
        cout << minElement;
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;
    
    return 0;
}
