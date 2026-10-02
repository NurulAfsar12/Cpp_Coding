#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin >> n >> m;

    vector <int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    vector <int> v(n);
    set<int> s;
    for(int i=n-1; i>=0; i--)
    {
        s.insert(a[i]);
        v[i] = s.size();
    }

    while(m--)
    {
        int l;
        cin >> l;
        cout << v[l-1]<<endl;
    }
    
    
    return 0;
}