// You are given an array of integers.

// Find the sum of all elements of the array.

// Input
// First line contains integer 𝑁
//  (1≤𝑁≤105)
//  — size of the array.
// Second line contains 𝑁
//  integers 𝐴1,𝐴2,…,𝐴𝑁
//  (−109≤𝐴𝑖≤109)
// .
// Output
// Print a single integer — the sum of the array elements.



#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N];
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    long long sum = 0;  // Yahan change kiya
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }
    
    cout << sum << endl;
    return 0;
}

// **Input:**
// ```
// 5
// 1 2 3 4 5
// ```

// **Output:**
// ```
// 15