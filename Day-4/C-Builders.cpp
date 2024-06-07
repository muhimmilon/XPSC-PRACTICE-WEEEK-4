#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    vector<int> h(n);
    int minh = 1e9; // Initial

    for (int i = 0; i < n; ++i)
    {
        cin >> h[i];
        minh = min(minh,h[i]);
    }
    int ttl = max(0, 2*minh-h[0]);

    if (ttl <= k)
    {
        // ttl increase distribute
        int per_incr = ttl / n;
        for (int i = 0; i < n; ++i)
        {
            h[i] += per_incr;
        }
        k -= ttl;
        for (int i = 0; i < k; ++i)
        {
            h[i] += 1;
        }
    }
    else {
        // distribute
        int per_incr = k / n;
        for (int i = 0; i < n; ++i)
        {
            h[i] += per_incr;
        }
        k %= n;
        for (int i = 0; i < k; ++i)
        {
            h[i] += 1;
        }
    }
    cout << *max_element(h.begin(), h.end()) << endl;

    return 0;
}
