#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int a[n], b[m];
    
    // Input first array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Input second array
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    // Merge arrays using two pointers
    int i = 0, j = 0;
    
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            cout << a[i];
            i++;
        } else {
            cout << b[j];
            j++;
        }
        
        // Print space if not last element
        if (i < n || j < m) {
            cout << " ";
        }
    }
    
    // Print remaining elements from array a
    while (i < n) {
        cout << a[i];
        i++;
        if (i < n) {
            cout << " ";
        }
    }
    
    // Print remaining elements from array b
    while (j < m) {
        cout << b[j];
        j++;
        if (j < m) {
            cout << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}