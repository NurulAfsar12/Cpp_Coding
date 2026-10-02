#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    
    vector <int> v2(v);
    for(int i=0; i<n; i++)
    {
        cout << v2[i] <<" ";
    }
    return 0;
}