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

        vector<int> runs(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> runs[i];
        }

        int run = runs[0];

        for (int i = 1; i < N; ++i)
        {
            int curr= runs[i];

            if ((100 - curr) > 0 && (100 - run) > 0)
            {
                if ((100 - curr) < (100 - run))
                {
                    run = curr;
                }
                else if ((100 - curr) == (100 - run) && curr > run)
                {
                    run = curr;
                }
            }
            else if ((100 - curr) < 0 && (100 - run) < 0)
            {
                if ((curr - 100) < (run - 100))
                {
                    run = curr;
                }
                else if ((curr - 100) == (run - 100) && curr > run)
                {
                    run = curr;
                }
            }
            else if ((100 - curr) > 0 && (100 - run) < 0)
            {
                if ((100 - curr) < (run - 100))
                {
                    run = curr;
                }
            }
            else if ((100 - curr) < 0 && (100 - run) > 0)
            {
                if ((curr - 100) < (100 - run))
                {
                    run = curr;
                }
            }
        }

        cout << run << endl;
    }

    return 0;
}
