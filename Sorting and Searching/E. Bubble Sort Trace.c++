#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    
    // Input array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Bubble Sort with trace
    for (int i = 0; i < n - 1; i++) {
        int swaps = 0;
        
        // Compare adjacent elements
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }
        
        // Print Pass
        cout << "Pass " << (i + 1) << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k];
            if (k < n - 1) cout << " ";
        }
        cout << " , swaps = " << swaps << endl;
        
        // Early termination if no swaps
        if (swaps == 0) {
            break;
        }
    }
    
    return 0;
}