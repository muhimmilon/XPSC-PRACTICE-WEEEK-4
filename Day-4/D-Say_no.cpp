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

        vector<int> arr(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> arr[i];
        }

        vector<int> sarr = arr;
        sort(sarr.begin(), sarr.end());
        sarr.erase(unique(sarr.begin(), sarr.end()), sarr.end());

        for (int spacial_baccara : sarr)
        {
            cout << spacial_baccara << " ";
        }
        cout << endl;
    }

    return 0;
}
