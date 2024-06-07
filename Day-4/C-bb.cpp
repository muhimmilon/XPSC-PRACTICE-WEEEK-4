#include<bits/stdc++.h>
using namespace std;

int main()
{
    double X,Y,Z;
    cin >> X >> Y >> Z;

    double cost = X / (1-Y/100);

    double newp = cost*(1+Z/100);

    cout << newp << .00 << endl;

    return 0;
}
 