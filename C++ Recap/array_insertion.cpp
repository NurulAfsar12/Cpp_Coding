#include <bits/stdc++.h>
using namespace std; 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int>v(n+1);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    int idx, val;
    cin >> idx >> val;
    // for(int i=n; i>= idx+1; i--)
    // {
    //     v[i] = v[i-1];
    // }
    v.insert(v.begin() + idx, val);
    for(int i=0; i<=n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}