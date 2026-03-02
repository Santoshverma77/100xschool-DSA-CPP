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
    
    // Column-wise wave print
    for (int j = 0; j < m; j++) {
        if (j % 2 == 0) {
            // Even column: top to bottom
            for (int i = 0; i < n; i++) {
                cout << matrix[i][j] << " ";
            }
        } else {
            // Odd column: bottom to top
            for (int i = n - 1; i >= 0; i--) {
                cout << matrix[i][j] << " ";
            }
        }
    }
    cout << endl;
    
    return 0;
}
// ```

// **Example:**
// ```
// Input:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9

// Output:
// 1 4 7 8 5 2 3 6 9