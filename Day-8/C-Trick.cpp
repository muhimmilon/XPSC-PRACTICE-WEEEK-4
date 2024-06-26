#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int N,M;
        cin >> N >> M;
        
        vector<int> A(N),B(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> B[i];
        }

        unordered_map<int, int> candies, chocolates;

        for (int i = 0; i < N; i++)
        {
            candies[A[i] % M]++;
            chocolates[B[i] % M]++;
        }

        int count = 0;

        for (const auto& candyr : candies)
        {
            int remain = candyr.first;
            int mn = (M - remain) % M;
            if (chocolates.count(mn))
            {
                count += candyr.second * chocolates[mn];
            }
        }

        cout << count << "\n";
    }

    return 0;
}
