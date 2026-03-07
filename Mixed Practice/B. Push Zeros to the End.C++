#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int arr[n];
        
        // Input array
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        // Two pointer approach
        int pos = 0; // Position to place next non-zero element
        
        // Move all non-zero elements to front
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                arr[pos] = arr[i];
                pos++;
            }
        }
        
        // Fill remaining positions with zeros
        while (pos < n) {
            arr[pos] = 0;
            pos++;
        }
        
        // Print result
        for (int i = 0; i < n; i++) {
            cout << arr[i];
            if (i < n - 1) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}