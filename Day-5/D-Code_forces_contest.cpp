#include<bits/stdc++.h>
using namespace std;

void middle(int n, int m, vector<string>& grid)
{
    int rmin = n, rmax = 0;
    int cmin = m, cmax = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (grid[i][j] == '#')
            {
                rmin = min(rmin, i);
                rmax = max(rmax, i);
                cmin = min(cmin, j);
                cmax = max(cmax, j);
            }
        }
    }

    int rmiddle = (rmin + rmax) / 2;
    int cmiddle = (cmin + cmax) / 2;

    cout << rmiddle + 1 << " " << cmiddle + 1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> grid[i];
        }
        middle(n, m, grid);
    }
    return 0;
}
