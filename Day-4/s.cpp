///////  8/6/24  ///////
//Run this code and find output..

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ss = "01001000 01100001 01110000 01110000 01111001 00100000 01000010 01101001 01110010 01110100 01101000 01100100 01100001 01111001 00100000";
    string p;
    for (size_t i = 0; i < ss.length(); i += 9)
    {
        string b = ss.substr(i, 8);
        char m = stoi(b, nullptr, 2);
        p += m;
    }
    string nn = "01010000 01000001 01010010 01001001 01010011 01001101 01001001 01010100 01000001";
    for (size_t i = 0; i < nn.length(); i += 9)
    {
        string b = nn.substr(i, 8);
        char m = stoi(b, nullptr, 2);
        p += m;
    }

    cout << p << endl;
    return 0;
}