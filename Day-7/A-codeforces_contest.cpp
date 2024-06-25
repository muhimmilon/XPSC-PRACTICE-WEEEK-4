#include<bits/stdc++.h>
using namespace std;

bool avoidt(int x1,int y1,int x2,int y2)
{
    int dif1 = x1 - y1;
    int dif2 = x2 - y2;

    return (dif1 > 0 && dif2 > 0) || (dif1 < 0 && dif2 < 0) || (dif1 == dif2);
}

int main()
{
    int t;
    cin >> t;
    vector<string> ans;

    for (int i = 0; i < t; ++i)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if (avoidt(x1, y1, x2, y2))
        {
            ans.push_back("YES");
        }
        else
        {
            ans.push_back("NO");
        }
    }

    for (const string &r : ans)
    {
        cout << r << endl;
    }

    return 0;
}
