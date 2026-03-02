#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int matrix[n][m];
    
    // Matrix input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // Boundary traversal (clockwise)
    
    // 1. First row (left to right)
    for (int j = 0; j < m; j++) {
        cout << matrix[0][j] << " ";
    }
    
    // 2. Last column (top to bottom, skip first element)
    for (int i = 1; i < n; i++) {
        cout << matrix[i][m-1] << " ";
    }
    
    // 3. Last row (right to left, skip last element) - only if n > 1
    if (n > 1) {
        for (int j = m - 2; j >= 0; j--) {
            cout << matrix[n-1][j] << " ";
        }
    }
    
    // 4. First column (bottom to top, skip first and last) - only if m > 1
    if (m > 1) {
        for (int i = n - 2; i >= 1; i--) {
            cout << matrix[i][0] << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}