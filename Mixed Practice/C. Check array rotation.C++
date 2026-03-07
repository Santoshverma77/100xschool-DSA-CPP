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
        
        // Find index of smallest element
        int minIndex = 0;
        
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[minIndex]) {
                minIndex = i;
            }
        }
        
        cout << minIndex << endl;
    }
    
    return 0;
}