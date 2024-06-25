#include<bits/stdc++.h>
using namespace std;

int abt(int x,int y,int k)
{
  while (k--)
  {
    x++;
    while (x % y == 0)
    {
      x /= y;
    }
  }
  return x;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int x, y, k;
    cin >> x >> y >> k;
    cout << abt(x, y, k) << endl;
  }

  return 0;
}
