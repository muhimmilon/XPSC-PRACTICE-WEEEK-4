#include <iostream>
#include <cmath>
using namespace std;

const long long MOD = 1000000007;

// Function to calculate the sum of digits of a number
int sumOfDigits(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r, k;
        cin >> l >> r >> k;

        long long count = 0;
        for (long long n = pow(10, l); n < pow(10, r); n++) {
            if (sumOfDigits(k * n) == k * sumOfDigits(n)) {
                count++;
                count %= MOD;
            }
        }

        cout << count << endl;
    }

    return 0;
}
