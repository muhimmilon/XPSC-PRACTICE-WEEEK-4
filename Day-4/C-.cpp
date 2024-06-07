#include<bits/stdc++.h>
using namespace std;

int main()
{
    double X,Y,Z;
    cin >> X >> Y >> Z;

    double cost = X / (1-Y/100);

    double newp = cost*(1+Z/100);

    cout << fixed;
    cout.precision(2);
    cout << newp << endl;

    return 0;
}
