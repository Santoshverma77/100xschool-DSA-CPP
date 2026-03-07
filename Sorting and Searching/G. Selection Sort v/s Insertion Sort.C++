#include <iostream>
using namespace std;

int countInsertionShifts(int arr[], int n) {
    int shifts = 0;
    
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            shifts++;
        }
        
        arr[j + 1] = key;
    }
    
    return shifts;
}

int countSelectionSwaps(int arr[], int n) {
    int swaps = 0;
    
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Only swap if minIndex is different
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
            swaps++;
        }
    }
    
    return swaps;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int original[n];
        for (int i = 0; i < n; i++) {
            cin >> original[i];
        }
        
        // Create copies for each sorting algorithm
        int arr1[n], arr2[n];
        for (int i = 0; i < n; i++) {
            arr1[i] = original[i];
            arr2[i] = original[i];
        }
        
        // Count operations
        int insertionShifts = countInsertionShifts(arr1, n);
        int selectionSwaps = countSelectionSwaps(arr2, n);
        
        // Compare and output
        if (insertionShifts < selectionSwaps) {
            cout << "Insertion Sort" << endl;
        } else if (selectionSwaps < insertionShifts) {
            cout << "Selection Sort" << endl;
        } else {
            cout << "Tie" << endl;
        }
    }
    
    return 0;
}