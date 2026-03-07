#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        // Handle n = 0 case
        if (n == 0) {
            int d;
            cin >> d;
            cout << endl;
            continue;
        }
        
        int arr[n];
        
        // Input array
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int d;
        cin >> d;
        
        // Handle case where d >= n
        d = d % n;
        
        // Print rotated array
        for (int i = 0; i < n; i++) {
            cout << arr[(i + d) % n];
            if (i < n - 1) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}