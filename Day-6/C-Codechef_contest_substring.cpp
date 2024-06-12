#include <iostream>
#include <vector>
using namespace std;

void solve(int N) {
    vector<int> A(N);

    // Fill the array according to the pattern
    for (int i = 0; i < (N + 1) / 2; ++i) {
        A[i] = 1; // First (N+1)/2 elements are 1
    }
    for (int i = (N + 1) / 2; i < N; ++i) {
        A[i] = 10; // Remaining elements are 10
    }

    // Print the resulting array
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        solve(N);
    }

    return 0;
}
