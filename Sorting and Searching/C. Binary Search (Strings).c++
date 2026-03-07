// You are given a guest list containing names in sorted lexicographical order.

// Given the name of a guest, determine whether the name exists in the list.

// Important: The list is sorted. Your solution is expected to use binary search.

// Input
// The first line contains an integer 𝑛
//  (1≤𝑛≤105
// ) — the number of names.

// The next 𝑛
//  lines each contain a name 𝑆𝑖
// .

// Each name:

// consists only of lowercase English letters,
// has length between 1 and 20.
// The names are given in non-decreasing lexicographical order.

// The last line contains a name 𝑋
//  — the guest to search for.

// Output
// Print YES if the name exists in the list, otherwise print NO.

// Examples
// InputCopy
// 5
// alice
// bob
// charlie
// david
// emma
// charlie
// OutputCopy
// YES
// InputCopy
// 3
// anna
// bella
// carol
// diana
// OutputCopy
// NO

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string names[n];
    
    // Input names
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }
    
    string x;
    cin >> x;
    
    // Binary Search
    int left = 0;
    int right = n - 1;
    bool found = false;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (names[mid] == x) {
            found = true;
            break;
        } else if (names[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
