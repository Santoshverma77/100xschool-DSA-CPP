#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int matrix[n][m];
    
    // Matrix input lete hain
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // Wave form me print karte hain
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            // Even row: left to right
            for (int j = 0; j < m; j++) {
                cout << matrix[i][j] << " ";
            }
        } else {
            // Odd row: right to left
            for (int j = m - 1; j >= 0; j--) {
                cout << matrix[i][j] << " ";
            }
        }
    }
    cout << endl;
    
    return 0;
}