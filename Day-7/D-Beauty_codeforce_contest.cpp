#include <iostream>
#include <vector>
using namespace std;

bool canEqualize(int n, int m, int k, vector<vector<int>>& heights, vector<vector<char>>& caps) {
    long long sum_snowy = 0, sum_non_snowy = 0;

    // Calculate initial sums of snowy and non-snowy caps
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (caps[i][j] == '0') {
                sum_snowy += heights[i][j];
            } else {
                sum_non_snowy += heights[i][j];
            }
        }
    }

    // Iterate over all possible top-left corners of k x k submatrices
    for (int i = 0; i <= n - k; ++i) {
        for (int j = 0; j <= m - k; ++j) {
            long long curr_snowy = 0, curr_non_snowy = 0;

            // Calculate sums of current k x k submatrix
            for (int di = 0; di < k; ++di) {
                for (int dj = 0; dj < k; ++dj) {
                    int row = i + di;
                    int col = j + dj;
                    if (caps[row][col] == '0') {
                        curr_snowy += heights[row][col];
                    } else {
                        curr_non_snowy += heights[row][col];
                    }
                }
            }

            // Calculate required change to equalize sums
            long long required_change = curr_non_snowy - curr_snowy;

            // Check if required_change can be applied using k x k submatrix transformations
            if (required_change % (k * k) == 0) {
                long long c = required_change / (k * k);
                if (sum_snowy + c * k * k == sum_non_snowy) {
                    return true;
                }
            }
        }
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<string> results;

    for (int testcase = 0; testcase < t; ++testcase) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<vector<int>> heights(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> heights[i][j];
            }
        }

        vector<vector<char>> caps(n, vector<char>(m));
        for (int i = 0; i < n; ++i) {
            string cap_str;
            cin >> cap_str;
            for (int j = 0; j < m; ++j) {
                caps[i][j] = cap_str[j];
            }
        }

        if (canEqualize(n, m, k, heights, caps)) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }

    for (const string& result : results) {
        cout << result << "\n";
    }

    return 0;
}
