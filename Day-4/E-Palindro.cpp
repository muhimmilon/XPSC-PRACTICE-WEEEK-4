#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;

    while (Q--)
    {
        string S;
        int K;
        cin >> S >> K;

        int n = S.size();
        int cost = 0;

        for (int i = 0; i < n / 2; ++i)
        {
            char lft = S[i];
            char right = S[n - i - 1];
            if (lft < right)
            {
                 cost += right - lft;
                }
                else
                {
                 cost += lft - right;
                }

        }

        if (cost <= K)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
