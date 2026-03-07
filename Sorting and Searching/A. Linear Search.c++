// You are given an array of integers and a number 𝑋
// .

// Determine whether 𝑋
//  exists in the array.

// Input
// The first line contains an integer 𝑛
//  (1≤𝑛≤105
// ) — the size of the array.

// The second line contains 𝑛
//  integers 𝐴𝑖
//  (−109≤𝐴𝑖≤109
// ).

// The third line contains an integer 𝑋
//  (−109≤𝑋≤109
// ).

// Output
// Print YES if 𝑋
//  exists in the array, otherwise print NO.

// Examples
// Input
// 5
// 1 3 7 9 2
// 7
// Output
// YES
// Input
// 4
// 5 8 10 12
// 6
// Output
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
    for (int i = 0; i < n; ++i) {
        if (arr[i] == X) {
            found = true;
            break;
        }
    }

    if (found) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
