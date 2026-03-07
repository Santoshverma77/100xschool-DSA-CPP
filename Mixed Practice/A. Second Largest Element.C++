#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n == 0) {
        cout << -1 << endl;
        return 0;
    }
    
    int arr[n];
    
    // Input array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Sort array in descending order
    sort(arr, arr + n, greater<int>());
    
    // Find second largest distinct element
    int largest = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < largest) {
            cout << arr[i] << endl;
            return 0;
        }
    }
    
    // No second largest found
    cout << -1 << endl;
    
    return 0;
}