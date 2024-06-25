#include <iostream>
#include <vector>
using namespace std;

int findValidXor(vector<int>& a) {
    int n = a.size();
    for (int x = 0; x < (1 << 8); ++x) { // (0 ≤ x < 28) means x can range from 0 to 255
        int totalXor = 0;
        for (int i = 0; i < n; ++i) {
            totalXor ^= (a[i] ^ x);
        }
        if (totalXor == 0) {
            return x;
        }
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << findValidXor(a) << endl;
    }
    return 0;
}
