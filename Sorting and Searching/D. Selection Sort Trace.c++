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
    
    // Selection Sort with trace
    for (int i = 0; i < n - 1; i++) {
        // Find minimum element in unsorted part
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Swap
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
        
        // Print Pass
        cout << "Pass " << (i + 1) << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k];
            if (k < n - 1) cout << " ";
        }
        cout << " , min_selected = " << arr[i] << endl;
    }
    
    return 0;
}