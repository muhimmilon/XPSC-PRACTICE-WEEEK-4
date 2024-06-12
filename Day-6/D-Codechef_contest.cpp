#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        // Initialize the array with all elements as 1
        vector<int> A(N, 1);

        // Calculate the XOR of all elements
        int xor_sum = 0;
        for (int i = 0; i < N; ++i) {
            xor_sum ^= A[i];
        }

        // Set the last element to the XOR sum
        A[N - 1] = xor_sum;

        // Print the array
        for (int i = 0; i < N; ++i) {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
