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
    
    // Har column ka sum calculate karte hain
    for (int j = 0; j < m; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++) {
            colSum += matrix[i][j];
        }
        cout << colSum;
        if (j < m - 1) {
            cout << " ";
        }
    }
    cout << endl;
    
    return 0;
}