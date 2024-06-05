#include<bits/stdc++.h>
using namespace std;

int init(const vector<int> &A)
{
    int sum = 0;
    for (size_t i = 1; i < A.size(); ++i)
    {
        sum += abs(A[i] - A[i - 1]);
    }
    return sum;
}
int maxdiff(int N, int K, vector<int> &A)
{
    int mainsum = init(A);
    int maxsum = mainsum;

    for (int i = 0; i < N; ++i)
    {
        int val = A[i];

        int news = mainsum;
        if (i > 0)
        {
            news -= abs(A[i] - A[i - 1]);
            news += abs(1 - A[i - 1]);
        }
        if (i < N - 1)
        {
            news -= abs(A[i] - A[i + 1]);
            news += abs(1 - A[i + 1]);
        }
        maxsum = max(maxsum, news);

        news = mainsum;
        if (i > 0) {
            news -= abs(A[i] - A[i - 1]);
            news += abs(K - A[i - 1]);
        }
        if (i < N - 1) {
            news -= abs(A[i] - A[i + 1]);
            news += abs(K - A[i + 1]);
        }
        maxsum = max(maxsum, news);
    }

    return maxsum;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);

        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        cout << maxdiff(N, K, A) << endl;
    }

    return 0;
}
