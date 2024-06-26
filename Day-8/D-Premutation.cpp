#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> permut(n);
        for (int i = 0; i < n - 1; ++i)
        {
            permut[i] = i + 1;
        }
        permut[n - 1] = n;

        for (int i = 0; i < n; ++i)
        {
            cout << permut[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
