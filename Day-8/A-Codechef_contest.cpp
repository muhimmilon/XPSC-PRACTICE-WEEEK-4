#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while (T--)
    {
        int N,X,Y;
        cin >> N >> X >> Y;
        
        int maxt = 0;
        
        for (int mm = 0; mm <= N / 2; ++mm)
        {
            int remain = N - mm * 2;
            int mn = remain;
            int curr = mm * Y + mn * X;
            maxt = max(maxt, curr);
        }
        
        cout << maxt << endl;
    }
    
    return 0;
}
