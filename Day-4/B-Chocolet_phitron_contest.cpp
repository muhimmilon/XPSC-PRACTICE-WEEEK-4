#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X,Y,T;
    cin >> X >> Y >> T;

    vector<bool> dp(T+1, false);
    dp[0] = true;

    for (int i=1; i<=T; ++i)
    {
        if (i>=X && dp[i - X])
        {
            dp[i] = true;
        }
        if (i>=Y && dp[i - Y])
        {
            dp[i] = true;
        }
    }

    if (dp[T])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
