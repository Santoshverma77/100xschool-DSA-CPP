#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    
    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    int count = 0;
    
    // Check all quadruplets (i, j, k, l) where i < j < k < l
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                for (int l = k + 1; l < n; l++) {
                    // Calculate: A[i] - 2*A[j] + 3*A[k] - 4*A[l]
                    int result = A[i] - 2*A[j] + 3*A[k] - 4*A[l];
                    if (result == x) {
                        count++;
                    }
                }
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}