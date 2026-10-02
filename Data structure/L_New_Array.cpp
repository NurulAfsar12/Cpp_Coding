#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> A(n);
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }
    vector <int> B(n);
    for(int i=0; i<n; i++)
    {
        cin >> B[i];
    }
    B.insert(B.end(), A.begin(),A.end());
    for(int x : B)
    {
        cout << x << " ";
    }
    
    return 0;
}