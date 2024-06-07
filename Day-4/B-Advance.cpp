#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,q;
        cin >> n >> q;

        string s;
        cin >> s;

        vector<vector<int>> frq(n+1, vector<int>(26, 0));

        for (int i = 1; i <= n; ++i)
        {
            frq[i] = frq[i-1];
            frq[i] [s[i-1] - 'a']++;
        }

        while (q--)
        {
            int l,r;
            cin >> l >> r;

            int oddee = 0;
            for (int i=0; i<26; ++i)
            {
                int count = frq[r][i]-frq[l-1][i];
                oddee += count % 2;
            }

            cout << oddee << endl;
        }
    }

    return 0;
}
