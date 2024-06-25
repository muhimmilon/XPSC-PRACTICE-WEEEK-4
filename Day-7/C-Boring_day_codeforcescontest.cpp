#include<bits/stdc++.h>
using namespace std;

int maxrt(vector<int>& a, int l, int r)
{
    int n = a.size();
    int currs = 0;
    int count = 0;
    int point = 0;

    for (int end = 0; end < n; ++end)
    {
        currs += a[end];

        while (currs > r && point <= end)
        {
            currs -= a[point];
            point++;
        }

        if (currs >= l && currs <= r) {
            count++;
            currs = 0;
            point = end + 1;
        }
    }

    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<int> ans(t);

    for (int i = 0; i < t; ++i)
    {
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> a(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> a[j];
        }

        ans[i] = maxrt(a,l,r);
    }

    for (const int &r : ans)
    {
        cout << r << endl;
    }

    return 0;
}
