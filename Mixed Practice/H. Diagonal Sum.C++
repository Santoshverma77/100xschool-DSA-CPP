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
    
    // Calculate diagonal sum
    long long diagonalSum = 0;
    
    for (int i = 0; i < n; i++) {
        diagonalSum += matrix[i][i];
    }
    
    cout << diagonalSum << endl;
    
    return 0;
}