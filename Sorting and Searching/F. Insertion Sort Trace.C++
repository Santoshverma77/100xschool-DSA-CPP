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
    
    // Insertion Sort with trace
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        int shifts = 0;
        
        // Shift elements greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            shifts++;
        }
        
        // Insert key at correct position
        arr[j + 1] = key;
        
        // Print Pass
        cout << "Pass " << i << ": ";
        
        // Print full array
        for (int k = 0; k < n; k++) {
            cout << arr[k];
            if (k < n - 1) cout << " ";
        }
        cout << " , ";
        
        // Print sorted portion
        for (int k = 0; k <= i; k++) {
            cout << arr[k];
            if (k < i) cout << " ";
        }
        cout << " | ";
        
        // Print unsorted portion
        for (int k = i + 1; k < n; k++) {
            cout << arr[k];
            if (k < n - 1) cout << " ";
        }
        
        cout << " , shifts = " << shifts << endl;
    }
    
    return 0;
}