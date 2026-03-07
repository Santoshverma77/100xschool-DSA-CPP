#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int matrix[n][n];
    
    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // Rotate 90 degrees clockwise
    // New position: matrix[i][j] → rotated[j][n-1-i]
    int rotated[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotated[j][n - 1 - i] = matrix[i][j];
        }
    }
    
    // Print rotated matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}