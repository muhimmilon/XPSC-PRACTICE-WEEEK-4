#include<bits/stdc++.h>
using namespace std;

int main()
{
    double X,Y,Z;
    cin >> X >> Y >> Z;

    double cost = X / (1-Y/100);

    double newp = cost * (1+Z/100);

    int P = newp;
    double P1 = newp-P;

    int P2 = P1*100+0.5;
    cout << P << ".";

    if (P2 < 10)
    {
        cout << "0";
    }
    cout << P2 << endl;

    return 0;
}
