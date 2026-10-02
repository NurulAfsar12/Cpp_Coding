#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,l,r;
        cin >> n >> l >> r;
        vector <int> v(n+1);
        for(int i=1; i<=n; i++)
        {
            cin >> v[i];
        }
        int mx1 = 0, mx2 = 0;
        for(int i=1; i<l; i++)
        {
            mx1 += v[i];
        }
        for(int i=r+1; i<=n; i++)
        {
            mx2 += v[i];
        }
        cout << max(mx1,mx2) <<endl;
        
    }
    return 0;
}