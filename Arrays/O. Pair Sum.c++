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
        
        // Check all pairs (i, j) where i < j
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (arr[i] + arr[j] == X) {
                    count++;
                }
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}