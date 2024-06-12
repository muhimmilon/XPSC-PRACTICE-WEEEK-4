#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while (T--)
    {
        int X, Y;
        cin >> X >> Y;
        int currd = X * 10;
        
        int hour = (currd - 10*Y) / (Y - 100);
        if ((currd - 10 * Y) % (Y - 100) != 0)
        {
            hour++;
        }
        
        cout << hour << endl;
    }
    
    return 0;
}
