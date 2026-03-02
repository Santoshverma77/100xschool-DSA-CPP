#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int N;
        cin >> N;
        int arr1[N];
        for (int i = 0; i < N; i++) {
            cin >> arr1[i];
        }
        
        int M;
        cin >> M;
        int arr2[M];
        for (int i = 0; i < M; i++) {
            cin >> arr2[i];
        }
        
        // Frequency array for second array
        int freq[100001] = {0};  // Assuming values <= 100000
        for (int i = 0; i < M; i++) {
            freq[arr2[i]]++;
        }
        
        // Print intersection in order of first array
        bool first = true;
        for (int i = 0; i < N; i++) {
            if (freq[arr1[i]] > 0) {
                if (!first) cout << " ";
                cout << arr1[i];
                first = false;
                freq[arr1[i]]--;
            }
        }
        cout << endl;
    }
    return 0;
}