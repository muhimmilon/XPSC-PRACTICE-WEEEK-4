#include<bits/stdc++.h>
using namespace std;

bool permutation(vector<int>& A,int N)
{
    vector<int> C(N);
    unordered_set<int> nmm;
    
    for (int i=0;i<N;++i)
    {
        int Ci = A[i];
        while (Ci <= N && nmm.find(Ci) != nmm.end())
        {
            ++Ci;
        }
        if (Ci > N)
        {
            return false;
        }
        C[i] = Ci;
        nmm.insert(Ci);
    }
    return true;
}

int main()
{
    int T;
    cin >> T;
    
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        
        for (int i=0;i<N;++i)
        {
            cin >> A[i];
        }
        
        if (permutation(A,N))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
