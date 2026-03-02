#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int N;
        cin >> N;
        
        int result = 0;
        
        // XOR all array elements
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            result ^= x;
        }
        
        // XOR with 0 to (N-2)
        for (int i = 0; i <= N - 2; i++) {
            result ^= i;
        }
        
        cout << result << endl;
    }
    
    return 0;
}