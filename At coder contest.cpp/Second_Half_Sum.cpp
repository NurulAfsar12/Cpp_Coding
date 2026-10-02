#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int sz = n/2;
    int sum = 0;
    for(int i=sz; i<n; i++)
    {
        sum += v[i];
    }
    cout << sum << endl;
    return 0;
}