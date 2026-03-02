#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        
        int X;
        cin >> X;
        
        int count = 0;
        
        // Check all triplets (i, j, k) where i < j < k
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                for (int k = j + 1; k < N; k++) {
                    if (arr[i] + arr[j] + arr[k] == X) {
                        count++;
                    }
                }
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}