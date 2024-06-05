#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> str(N);
        vector<int> val(N);

        for (int i = 0; i < N; ++i)
        {
            cin >> str[i] >> val[i];
        }

        int maxs = 0;

        for (int i = 0; i < N; ++i)
        {
            for (int j = i + 1; j < N; ++j)
            {
                int strc = str[i] * val[j] + val[i] * str[j];
                maxs = max(maxs, strc);
            }
        }

        cout << maxs << endl;
    }

    return 0;
}
