#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int maxOnes = 0;
    int maxRowIndex = -1;
    
    for (int i = 0; i < n; i++) {
        int countOnes = 0;
        
        for (int j = 0; j < m; j++) {
            int element;
            cin >> element;
            if (element == 1) {
                countOnes++;
            }
        }
        
        // Agar current row me zyada 1s hain
        if (countOnes > maxOnes) {
            maxOnes = countOnes;
            maxRowIndex = i;
        }
    }
    
    // Agar koi bhi 1 nahi mila
    if (maxOnes == 0) {
        cout << -1 << endl;
    } else {
        cout << maxRowIndex << endl;
    }
    
    return 0;
}