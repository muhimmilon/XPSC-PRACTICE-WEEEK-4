#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> h(n);
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
        }
        
        int seconds = 0;
        bool all_zero = false;
        
        while (!all_zero) {
            all_zero = true;
            for (int i = 0; i < n; ++i) {
                if (h[i] > 0 && (i == n - 1 || h[i] > h[i + 1])) {
                    h[i] = max(0, h[i] - 1);
                }
                if (h[i] > 0) {
                    all_zero = false;
                }
            }
            if (!all_zero) {
                seconds++;
            }
        }
        
        cout << seconds << endl;
    }
    
    return 0;
}
