// You are given a sorted array of integers and a number 𝑋
// .

// Determine whether 𝑋
//  exists in the array.

// Important: The array is sorted in non-decreasing order. Your solution is expected to use binary search.

// Input
// The first line contains an integer 𝑛
//  (1≤𝑛≤105
// ) — the size of the array.

// The second line contains 𝑛
//  integers 𝐴𝑖
//  (−109≤𝐴𝑖≤109
// ) in non-decreasing order.

// The third line contains an integer 𝑋
//  (−109≤𝑋≤109
// ).

// Output
// Print YES if 𝑋
//  exists in the array, otherwise print NO.

// Examples
// InputCopy
// 5
// 1 3 5 7 9
// 7
// OutputCopy
// YES
// InputCopy
// 6
// -5 -2 0 4 10 12
// 3
// OutputCopy
// NO




#include <iostream>
#include <vector>   

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int X;
    std::cin >> X;

    bool found = false;
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == X) {
            found = true;
            break;
        } else if (arr[mid] < X) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}

